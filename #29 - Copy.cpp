#include<iostream>
using namespace std;

class X{
	int a,b;
	public:
		X(void);
		void display(){
			cout<<"the value of a is :"<<a<<endl<<"the value of b is :"<<b<<endl;
		}
};

X :: X(){
	a= 10;
	b = 20;
	cout<<"hello"<<endl;
}
int main(){
	X x1,x2,x3;
	x1.display();
	return 0;
} 
