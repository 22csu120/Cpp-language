#include<iostream>
using namespace std;
//inline int product(int a,int b){ //stores a*b in main function and is not called multiple times
//
//	return a*b;
//}

int product(int a,int b){
	static int c =0;
	c += 1;
	return a+b+c;
}
float intrest(int money , float in=1.04){
	int c = (money*in) - money;
	return c;
}
int sum(int a, int c , int b=10){
	cout<<a+b+c;
}
int main(){
	int a=4,b=5;
//	cout<<"product is "<<product(a,b)<<endl;
//	int money = 100000;
//	cout<<"for commoners you will recive "<<intrest(money)<<" Rs on your "<<money<<endl;
//	cout<<"for VIPs you will recive "<<intrest(money,1.10)<<" Rs on your "<<money<<endl;
	sum(a,b);
	
	return 0;
} 
