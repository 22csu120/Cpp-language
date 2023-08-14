#include<iostream>
using namespace std;
int main(){
//	int a;
//	int *ptr =&a;
//	a = 99;
//	cout<<"the address of a is :"<<*ptr<<endl;
//	
//	int *ptr = new int(35);
//	cout<<"the address of a is :"<<*ptr<<endl;

	int *arr = new int[3];
	*arr=4;
	arr[1]=5;
	arr[2]=8;
	cout<<arr[0];
	return 0;
} 
