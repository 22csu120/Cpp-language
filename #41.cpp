#include<iostream>
using namespace std;

class A{
	protected:
	int num1;
	public:
		void setnum1(int a){
			num1 = a;
		}
};

class B{
	protected:
	int num2;
	public:
		void setnum2(int b){
			num2 = b;
		}
};

class child : public A,public  B{
	int num3 = num1+num2;
	public:
		void show(){
			cout<<"num1 is "<<num1<<endl;
		}
};

int main(){
	
	return 0;
} 
