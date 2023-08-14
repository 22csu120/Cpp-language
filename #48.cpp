#include<iostream>
using namespace std;

class base1{
	int data1;
	public:
		base1(int a){
			data1 = a;
			cout<<"base1 constructor called"<<endl;
		}
		void show1(){
			cout<<"dara1 value is :"<<data1<<endl;
		}
};

class base2{
	int data2;
	public:
		base2(int a){
			data2 = a;
			cout<<"base2 constructor called"<<endl;
		}
		void show2(){
			cout<<"dara2 value is :"<<data2<<endl;
		}
};

class derived: public base2, public base1{
	int a,b;
	public:
	derived(int x,int y, int z, int p):base1(x),base2(y){
		a=z;
		b=p;
		cout<<"derived consturctor called"<<endl;
	}
	void show3(){
		cout<<"value of a & b are "<<a<<" "<<b<<endl;
	}
};
int main(){
	derived d(2,3,4,5);
	d.show1();
	d.show2();
	d.show3();
	return 0;
} 
