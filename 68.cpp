#include<iostream>
using namespace std;
template<class T>
class Base{
	public:
		T data;
		Base(T a){
			data = a;
		}	
		void display();
};
template<class T>
void Base<T> :: display(){
	cout<<data;
}

void func(int a){
	cout<<"func1 :"<<a<<endl;
}
template<class T>
void func(T a){
	cout<<"template :"<<a<<endl;
}

int main(){
//	Base <int> a1(4);
//	cout<<a1.data;
//	a1.display();
	func(3.89);
	return 0;
} 
