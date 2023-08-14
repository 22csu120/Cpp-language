#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		complex(int x, int y){
			a=x;
			b=y;
		}
		complex(int x){
			a=x;
			b=0;
		}
		complex(){
			a=0;
			b=0;
		}
		void display(){
			cout<<"the point is : ("<<a<<" , "<<b<<")"<<endl;
		}
};
int main(){
	complex c1(4,5);
	c1.display();
	
	complex c2(5),c3;
	c2.display();
	c3.display();
	return 0;
} 
