#include<iostream>
using namespace std;

class X{
	int a,b;
	public:
		X(int,int);
		void display(){
			cout<<"the value of a is :"<<a<<endl<<"the value of b is :"<<b<<endl;
		}
};

X :: X(int p,int q){
	a= p;
	b = q;
	cout<<"hello"<<endl;
}

int main(){
	X x1(2,8);//Implicit call
	X x2 = X(5,7);
	x1.display();
	x2.display();
	return 0;
} 
