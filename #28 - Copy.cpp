#include<iostream>
using namespace std;
class Y;
class X{
	int val1;
	friend void add(X,Y);
	public:
		void getnum(int a){
			val1 = a;
			
		}
		void display(){
			cout<<"the value of a is "<<val1;
		}
};

class Y{
	int val2;
	friend void add(X,Y);
	public:
		void getnum(int b){
			val2 =b;
		}
		void display(){
			cout<<"the value of b is "<<val2;
		}
};

void add(X o1 , Y o2){
	cout<<"the sum is "<<o1.val1+o2.val2;
}
int main(){
	X x;
	Y y;
	x.getnum(4);
	x.display();
	y.getnum(5);
	y.display();
	add(x,y);
	return 0;
} 
