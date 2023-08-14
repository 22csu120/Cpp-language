#include<iostream>
using namespace std;
class A{
	public:
		void show(){
			cout<<"hello"<<endl;
		}
};
class B : public A{
	public:
		void show(){
			cout<<"hi"<<endl;
		}
};
int main(){
	B b;
	b.show();
	return 0;
} 
