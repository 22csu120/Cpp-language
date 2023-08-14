#include<iostream>
#include<string.h>
using namespace std;

struct student{
	int id;
	int age;
	char favchar;
	char name[10];
};/*
int main(){
	struct student harry;
	harry.id = 455;
	harry.age =7;
	harry.favchar = '@';
	cout<<harry.id<<endl;
	cout<<harry.age<<endl;
	cout<<harry.favchar<<endl;
	

union student{
	int id;
	int age;
	char favchar;
};

int main(){
	union student harry;
	harry.id = 455;
	harry.favchar = '@';
	harry.age =7;

	cout<<harry.id<<"id"<<endl;
	cout<<harry.age<<"age"<<endl;
	cout<<harry.favchar<<"char"<<endl;
*/
int main(){
	struct student harry;
	harry.id = 455;
	strcpy(harry.name,"happy");
	harry.age =7;
	harry.favchar = '@';
	cout<<harry.id<<endl;
	cout<<harry.age<<endl;
	cout<<harry.favchar<<endl;
	cout<<harry.name;
	return 0;
} 
