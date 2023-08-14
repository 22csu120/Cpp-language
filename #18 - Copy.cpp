#include<iostream>
using namespace std;
//int factorial(int n){
//	if(n<=1){
//		return 1;
//	}
//	return n*factorial(n-1);
//}

int fib(int a){
	if(a<2){
		return 1;
	}
	return fib(a-2) + fib(a-1);
}


int main(){
	int a;
	cout<<"Enter a num till you want the series "<<endl;
	cin>>a;
	cout<<"the series is :"<<endl;
	cout<<fib(a);
	return 0;
} 
