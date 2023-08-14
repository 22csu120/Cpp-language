#include<iostream>
using namespace std;
int sum(int a, int b);
void g( );
int main(){
	int num1 , num2;
	cout<<"enter num 1";
	cin>>num1;
	cout<<"enter num 2";
	cin>>num2;
	cout<<"sum is "<<(sum(num1,num2));
	g();
	return 0;	
} 

int sum(int a , int b){
	int c = a+b;
	return c;
}
void g(){
	cout<<endl<<"Hellow";
}
