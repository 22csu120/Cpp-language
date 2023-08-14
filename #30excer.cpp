#include<iostream>
#include<cmath>
using namespace std;

class point{
	int a,b;
	friend void distance(point,point);
	public:
		void sum(int x, int y){
			a=x;
			b=y;
		}
		void display(){
			cout<<"the point is : ("<<a<<" , "<<b<<")"<<endl;
		}
};

void distance(point p1,point p2){
	int sum = (p1.a-p2.a)*(p1.a-p2.a);
	int sum2 = (p1.b-p2.b)*(p1.b-p2.b);
	int ans = sqrt(sum+sum2);
	cout<<"the distance is "<<ans<<endl;
}

int main(){
	point p1,p2;
	p1.sum(1,0);
	p1.display();
	p2.sum(70,0);
	p2.display();
	distance(p1,p2);
	return 0;
} 
