#include<iostream>
using namespace std;
class complex;

class calculator{
	int x,y;
	public:
		int sum(int a1, int a2){
			return (a1+a2);
		}
		
		int sumrealnum(complex,complex);
		int sumimgnum(complex,complex);
};

class complex{
	int a;
	int b;
//	friend calculator :: sumrealnum(complex , complex);
//	friend calculator :: sumimgnum(complex , complex);
	friend class calculator;
	public:
		void setnum(int x,int y){
			a=x;
			b=y;
		}
//		friend complex sumofsum(complex o1,complex o2);//it allows sumofsum() to use its private data
		void display(){
			cout<<a <<" + "<<b<<"i"<<endl;
		}
};
int calculator :: sumrealnum(complex c1,complex c2){
	return(c1.a + c2.a);
}
int calculator :: sumimgnum(complex c1,complex c2){
	return (c1.b+c2.b);
}
int main(){
	complex o1,o2;
	o1.setnum(5,6);
	o2.setnum(2,3);
	calculator calc;
	int ans = calc.sumrealnum(o1,o2);
	cout<<"real num sum is "<<ans<<endl;
	int ans2 = calc.sumimgnum(o1,o2);
	cout<<"imagnery part is "<<ans2<<endl;
	return 0;
} 
