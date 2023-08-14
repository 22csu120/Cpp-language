#include<iostream>
#include<cmath>
using namespace std;

class calc{
	protected:
		int a,b;
	public:
		void setvalue(float,float);
		int add();
		int sub();
		int mul();
		int div();
		void show();
		
};

void calc :: setvalue(float num1,float num2){
	a = num1;
	b = num2;
}
int calc :: add(){
	return a+b;
}
int calc :: sub(){ 
	return abs(a-b);
}
int calc :: mul(){
	return a*b;
}
int calc :: div(){
	return a/b;
}

//class show1: public calc{
//	public:
//		display1(){
//			cout<<"the sum is "<<add()<<endl;
//			cout<<"the diff is "<<sub()<<endl;
//			cout<<"the multiplicatin is "<<mul()<<endl;
//			cout<<"the division is "<<div()<<endl;
//		}
//};


class scalc{
	protected:
		float c,d;
	public:
		void setnum2(float,float);
		int log1();
		int log2();
		int powr();
		int sine1();
		int sine2();
};
void scalc :: setnum2(float num1,float num2){
	c= num1;
	d=num2;
}
int scalc :: log1(){
	return log(c);
}
int scalc :: log2(){
	return log(d);
}
int scalc :: powr(){
	return pow(c,d);
}
int scalc :: sine1(){
	return sin(c);
}
int scalc :: sine2(){
	return sin(d);
}


//class show2 : public scalc{
//	public:
//		display2(){
//			cout<<"the log of a is "<<log1()<<" and b is "<<log2()<<endl;
//			cout<<"the power of a is b is "<<powr()<<endl;
//			cout<<"the sine of first and second  is "<<sine1()<<" "<<sine2()<<endl;
//		}
//};


class child : public clac , public scalc{
	public:
			void display(){
			cout<<"the log of a is "<<log1()<<" and b is "<<log2()<<endl;
			cout<<"the power of a is b is "<<powr()<<endl;
			cout<<"the sine of first and second  is "<<sine1()<<" "<<sine2()<<endl;
			cout<<"the sum is "<<add()<<endl;
			cout<<"the diff is "<<sub()<<endl;
			cout<<"the multiplicatin is "<<mul()<<endl;
			cout<<"the division is "<<div()<<endl;
			}
}; 


int main(){
//	show1 s;
//	show2 c;
//	s.setvalue(6,9);
//	s.add();
//	s.div();
//	s.mul();
//	s.sub();
//	s.display1();
	return 0;
} 
