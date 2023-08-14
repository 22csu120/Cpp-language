#include<iostream>
using namespace std;

class Employee{
	int id;
	int salary;
	static int count;
	public:
		void setid(){
			cout<<"Enter the id for "<<count<<" person"<<endl;
			cin>>id;
			count++;
		}
		
		void getid(){
			cout<<"id for "<<count<<" person is "<<id<<endl;
		}
		static void getcount(){
			cout<<"total employes till now--->"<<count<<endl<<endl;
		}
};

int Employee :: count=1;

int main(){
	Employee division[4];
	for(int i=0;i<4;i++){
		division[i].setid();
		division[i].getid();
		Employee::getcount();
	}
	return 0;
} 
