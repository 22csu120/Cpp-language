#include<iostream>
using namespace std;
class number{
	int a;
	public:
		number(){
		a=0;}
		number(int x){
			a=x;
		}
		void display(){
			cout<<"value of a is :"<<a<<endl;
		}
};
int main(){
	number n1,n2,n3(45);
	n1.display();
	n3.display();
	number n5 = n3;
	n5.display();
	number n6(n3);
	n6.display();
	
	
	return 0;
} 
