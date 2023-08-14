#include<iostream>
using namespace std;
template T1,T2;
class base{
	protected:
		int id;
	public:
		base(int b){
			id=b;
		}
		
};

class derived: public base{
	protected:
		int marks;
	public:
		derived(int m){
			marks = m;
		}
		void show(){
			cout<<"id is :"<<id<<endl<<"marks is :"<<marks<<endl;
		}
};
int main(){
	
	return 0;
} 
