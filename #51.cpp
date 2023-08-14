#include<iostream>
using namespace std;
class complex{
	int a,b;
	public:
		void setdata(int x,int y){
			a=x;
			b=y;
		}
		void getdata(){
			cout<<"the value of a and b is :"<<a<<" & "<<b<<endl;
		}
};
int main(){
//	complex c1;
//	complex *ptr = &c1;
//	ptr->setdata(34,67);
//	ptr->getdata();

//	complex c2;
	complex *ptr1 = new complex[4];
	ptr1->setdata(7,8);
	ptr1->getdata();
	return 0;
} 
