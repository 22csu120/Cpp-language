#include<iostream>
#include<math.h>
using namespace std;

class point{
	friend int distance(point,point);
	int a,b;
	public:
		void getnum(int x,int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"the point is : ( "<<a<<" , "<<b<<" )"<<endl;
		}
};

int distance(point p1, point p2){
	int sum = (p1.a-p2.a)*(p1.a-p2.a);
	int sum2 = (p1.b-p2.b)*(p1.b-p2.b);
	int ans = sqrt(sum+sum2);
	return ans;
}

int main(){
	point p1,p2;
	p1.getnum(2,4);
	p2.getnum(3,5);
	int answer = distance(p1,p2);
	cout<<answer;
	
	return 0;
}

