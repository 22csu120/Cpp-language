#include<iostream>
using namespace std;

class Employee{
	int id;
	static int count;//so that same count is not repeated
	public :
		void getid(){
			cout<<"Enter id for "<<count<< " member";
			cin>>id;
			count++;
		}
		void display(){
			cout<<"ID for "<<count<<" member is "<< id;
		}
		static void counts(){
			cout<<"count is "<<count;//we need to define what is count
		}
};

int Employee::count = 100;//we did it because it will increase for every class incremation

int main(){
	Employee a,b,c;
	a.getid();
	a.display();
	Employee::counts();
	b.getid();
	b.display();
	Employee::counts();
	c.getid();
	c.display();
	Employee::counts();
	return 0;
} 
