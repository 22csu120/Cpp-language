#include<iostream>
using namespace std;
class Arpit{
	int a=100;
};
class derived : Arpit{
	public:
		void display(){
			cout<<a;
		}
};
};
int main(){
	derived d;
	d.display();
	return 0;
} 
