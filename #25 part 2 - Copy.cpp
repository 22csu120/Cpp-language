#include<iostream>
using namespace std;

class complex{
	int a,b;
	public:
		void sum(int x,int y){
			a=x;
			b=y;
		}
		void sumofsum(complex c1,complex c2){
			a = c1.a + c2.a;
			b = c1.b + c2.b; 
		}
		
		void display(){
			cout<<a<<" + "<<b<<" i"<<endl;
		}
};

int main(){
	complex c1,c2,c3;
	c1.sum(1,2);
	c1.display();
	
	c2.sum(5,6);
	c2.display();
	
	c3.sumofsum(c1,c2);
	c3.display();
	return 0;
} 
