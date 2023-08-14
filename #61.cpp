#include<iostream>
#include<fstream>
using namespace std;
int main(){
//	cout<<"Enter your name"<<endl;
//	string str;
//	cin>>str;
//	ofstream write("tut60b.txt");
//	write<<str;
//	return 0;
//	write.close();
	
	ifstream read("tut60b.txt");
	string content;
	getline(read,content);
	cout<<content;
	read.clear();
	read.close();
	
	return 0;
} 
