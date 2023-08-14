#include<iostream>
using namespace std;

class complex{
	int a;
	int b;
	
	public:
		void setnum(int x,int y){
			a=x;
			b=y;
		}
		friend complex sumofsum(complex o1,complex o2);//it allows sumofsum() to use its private data
		void display(){
			cout<<a <<" + "<<b<<"i"<<endl;
		}
};

complex sumofsum(complex o1, complex o2){//heae sumofsum() is not a part of complex class so it needs permision for using private data
	complex o3;
	o3.setnum((o1.a+o2.a), (o1.b+o2.b));
	return o3;
}


int main(){
	complex c1,c2,c3;
	c1.setnum(2,4);
	c1.display();
	
	c2.setnum(6,7);
	c2.display();
	
	c3=sumofsum(c1,c2);//since it is not a part of class at first it will not be executed as c3.sumofsum()
						//takes objects as arguments (o3,o4)
	c3.display();
	return 0;
} 
