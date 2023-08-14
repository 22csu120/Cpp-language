#include<iostream>
using namespace std;
class datas{
	int data1;
	public:
		int data2;
		void setdatas();
		int display1();
		int display2();
};
void datas :: setdatas(){
	data1 = 10;
	data2 = 20;
}
int datas :: display1(){
	return data1 ;
}
int datas :: display2(){
	return data2 ; 
}

class child : public datas{
	
	public:
		int data3;
		void setdata3();
		void getdata();
		
};
void child :: setdata3(){
	data3 = data2*display1();
}
void child :: getdata(){
	cout<<"data 1 is "<<display1()<<endl;
	cout<<"data 2 is "<<display2()<<endl;
	cout<<"data 3 is "<<data3<<endl;
}
int main(){
	child c;
//	datas d;
	c.setdatas();
	c.setdata3();	
	c.getdata();
	return 0;
} 
