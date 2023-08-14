#include<iostream>
using namespace std;

class employee{
	public:
	int id;
	int salary=24;
	
		employee(int ID){
			id = ID;
		}
		employee(){}
};

class programer : public employee{
	public:
		programer(int ID){
			id = ID;
		}
	int languagenum = 9;
	void getdata(){
		cout<<id;
	}
};
int main(){
	employee harry(1),rohan(2);
	cout<<harry.salary<<endl;
	cout<<rohan.salary<<endl;
	programer skillF(10);
	cout<<skillF.languagenum;
	skillF.getdata();
	cout<<skillF.id;
	return 0;
} 
