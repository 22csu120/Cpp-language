#include<iostream>
#include<cstring>
using namespace std;


class man{
	protected:
		string name;
		int age;
	public:
		man(string s, int a){
			name = s;
			age = a;
		}
		virtual void display()=0;
};

class student:public man{
	protected:
		int fees;
	public:
		student(string s,int a,int f):man(s,a){
			fees = f;
		}
		void display(){
			cout<<"The name is "<<name<<endl<<"The age is "<<age<<endl<<"The fees of student is :"<<fees<<endl;
		}
};

class worker: public man{
	protected:
		int salary;
	public:
		worker(string s,int a,int sal):man(s,a){
			salary = sal;
		}
		void display(){
			cout<<"The name is "<<name<<endl<<"The age is "<<age<<endl<<"The salary of worker is :"<<salary<<endl;
		}
};
int main(){
	int f,a,sal,x,y,i;
	string s;
	s = "Sumit";
	a=10;
	sal=120;
	man *ptr;
	worker w(s,a,sal);
	ptr = &w ;
	ptr->display();

	return 0;
} 
