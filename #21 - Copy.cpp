#include<iostream>
using namespace std;

class Employee{
	private :
	int a,b,c;
	public :
		int d,e;
		void setData(int a1,int a2 , int a3);
		void getData(){
		cout<<"the value of a is :"<<a<<endl;
		cout<<"the value of b is :"<<b<<endl;
		cout<<"the value of c is :"<<c<<endl;
		cout<<"the value of d is :"<<d<<endl;
		cout<<"the value of e is :"<<e<<endl;
	}
};

void Employee :: setData(int a1 , int a2 , int a3){
	a = a1;
	b = a2;
	c = a3;
};
int main(){
	Employee harry;
	harry.d=37;
	harry.e = 45;
	harry.setData(34,65,43);
	harry.getData();
	return 0;
} 
