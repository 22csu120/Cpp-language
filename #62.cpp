#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
//	ofstream write;
//	write.open("tut60b.txt");
//	write<<"shrutiiiii"<<endl<<"mere jaannnn"<<"lund chus leeeee ";
	ifstream read("tut60b.txt");
	string str;
	while(read.eof() != 1){
		getline(read, str);
		cout<<str<<endl;
	}
	return 0;
} 
