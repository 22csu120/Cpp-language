#include<iostream>
using namespace std;
int swappointer(int*,int*);
int swapvar(int &a, int &b);
int & swapadd(int &a, int &b);
int main(){
	int num1=4, num2 = 5;
	cout<<"num1 is "<<num1<<" and num2 is "<<num2<<endl;
//	swappointer(&num1,&num2);;
//	swapvar(num1,num2);
	swapadd(num1,num2)= 678;
	cout<<num1;
//	cout<<"num1 is "<<num1<<" and num2 is "<<num2;
	return 0;
} 
int swappointer(int* a , int* b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int swapvar(int &a, int &b){
	int temp = a;
	a=b;
	b=temp;
}
int & swapadd(int &a, int &b){
	int temp = a;
	a=b;
	b=temp;
	return a;
}
