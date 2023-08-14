#include<iostream>
#include<math.h>
using namespace std;

class point{
	friend point distance(point,point);
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

point distance(point p1, point p2){
	point p3;
	int sum = (p1.a-p2.a)*(p1.a-p2.a);
	int sum2 = (p1.b-p2.b)*(p1.b-p2.b);
	int ans = sqrt(sum+sum2);
//	cout<<"the distance is :"<<ans<<endl;
	p3 = 
}



int main(){
	point p1,p2;
	
	p1.getnum(2,4);
	p1.display();
	
	p2.getnum(3,5);
	p2.display();
	
	distance(p1,p2);
	
	
	return 0;
} 
