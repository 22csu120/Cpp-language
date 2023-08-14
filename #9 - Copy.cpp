#include<iostream>
using namespace std;
int main(){
	int age;
//	cout<<"Enter your age :"<<endl;
	cin>>age;
//	if(age<18){
//		cout<<"You can not come to my party";
//	}
//	if(age==18){
//		cout<<"You are a kid";
//	}
//	
//	if(age>18){
//		cout<<"you can come to my party";
//	}

	switch (age){
		case 18:
			cout<<"you are special";
			break;
		default:
			cout<<"you are not special";
			break;
	}
	return 0;
} 
