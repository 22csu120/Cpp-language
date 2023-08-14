#include<iostream>
using namespace std;
template <class T1 = int ,class T2 = float, class T3 = char>



class base{
	
	public:
	T1 a;
	T2 b;
	T3 c;
	void setvalues(T1 x,T2 y , T3 z){
		a=x;
		b=y;
		c=z;
	}
	void show(){
		cout<<"a = "<<a<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;
	}
}; 
int main(){
	base <>b1(4,5.6,'j');
	
	return 0;
} 
