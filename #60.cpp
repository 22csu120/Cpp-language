#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
//class writing{
//	int line;
//	public:
//		string str;
//		void write(){
//			ifstream read("Welcome.txt");
//			ofstream writes("test.txt");
//			if(read.is_open() && writes.is_open()){
//				while(read.eof() != 1){
//					getline(read,str);
//					writes<<str<<endl;
//				}
//			}
//		}
//};
int main(){
//	writing w;
//	w.write();
string str;
	ifstream read("Welcome.txt");
	ofstream writes("test.txt");
	if(read.is_open()){
		cout<<"first open";
	}
	if(writes.is_open()){
		cout<<"second open";
	}
	if(read.is_open() && writes.is_open()){
		while(read.eof() != 1){
				getline(read,str);
				writes<<str<<endl;
		}
		cout<<"file copied";
	}
}
