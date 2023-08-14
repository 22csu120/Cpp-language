#include<iostream>
#include<iomanip>//this is a new hedder for manipulators
using namespace std;
int main(){
//	const int a = 45;
//	cout<<a<<endl;
////	a =6;
//	cout<<a;
//	return 0;
	
	int a = 4 , b = 34, c=34448282;
	cout<<"The value of a without setw : "<<setw(3)<<a<<endl;
	cout<<"The value of b without setw : "<<setw(3)<<b<<endl;
	cout<<"The value of c without setw : "<<setw(3)<<c<<endl;
	
	cout<<"The value of a: "<<a<<endl;
	cout<<"The value of b: "<<b<<endl;
	cout<<"The value of c: "<<c<<endl;
}
