#include<iostream>
using namespace std;
class Y;
class X{
	int  val1;
	friend void change(X &,Y &);
	public:
		void setnum(int a){
			val1 = a;
		}
		void display(){
			cout<<"the value of a is "<<val1<<endl;
		}
};

class Y{
	int val2;
	friend void change(X &,Y &);
	public:
		void setnum(int b){
			val2 = b;
		}
		void display(){
			cout<<"the value of b is "<<val2<<endl;
		}
};

void change(X &p, Y &q){
	int temp = p.val1;
	p.val1 = q.val2;
	q.val2 = temp; 
}
int main(){
	X x;
	Y y;
	y.setnum(7);
	y.display();
	
	x.setnum(9);
	x.display();
	
	change(x,y);
	y.display();
	x.display();
	return 0;
} 
