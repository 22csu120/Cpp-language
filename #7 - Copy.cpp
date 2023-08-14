#include<iostream>
using namespace std;
int global = 45;
int main(){
	
//	int a,b,global;
//	cout<<::global;
//	float d = 34.4;
//	double e = 34.4;
//	cout<<"the value of d is :"<<d<<endl<<"the vale of e is :"<<e;
//	cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
//	cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
//	cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
//	cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
//	cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;

	float i = 34.67;
	float j = i;
	float c = 5.8;
	float d = 6.3;
	i =c+d;
	cout<<i<<endl;
	cout<<j<<endl;
	cout<<int(j)<<endl;
	cout<<j<<endl<<endl;
	int o = j;
	cout<<o<<endl<<endl;
}
