#include<iostream>
using namespace std;
int main(){
	int a =7;
	int*b = &a;
	
	cout<<"value of a "<<a<<endl;
	cout<<"address of a "<<&a<<endl;
	cout<<"address of a by b "<<b<<endl;
	cout<<"value in b "<<*b<<endl;
	cout<<endl<<endl;
	int**c = &b;
	cout<<"addres of b is "<<&b<<endl;
	cout<<"addrss of b by c is "<<c<<endl;
	cout<<"address of c is "<<&c<<endl;
	cout<<"value in c is "<<*c<<endl;
	cout<<"last value is "<<**c<<endl;
	
	return 0;
} 
