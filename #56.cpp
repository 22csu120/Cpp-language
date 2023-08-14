#include<iostream>
using namespace std;
class base{
	public:
		int a;
		virtual void display(){
			cout<<"Base class (a = "<<a<<" )"<<endl;
		}
		
};
class derived : public base{
	public:
//		a=20;
		void display(){
			cout<<"derived class (a = "<<a<<" )"<<endl;
		}
};
int main(){
	base *base_ptr = new base;
	derived d;
	base_ptr = &d;
	base_ptr->a=30;
	base_ptr->display();
	
	return 0;
}
