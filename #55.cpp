#include<iostream>
using namespace std;
class base{
	public:
		int a=10;
		void display(){
			cout<<"Base class (a = "<<a<<" )"<<endl;
		}
		
};
class derived : public base{
	public:
		a=20;
		void display(){
			cout<<" class (a = "<<a<<" )"<<endl;
		}
};
int main(){
	base *base_ptr = new base;
	derived d;
	*base_prt = &d;
	base_ptr->a=30;
	
	
	return 0;
}
