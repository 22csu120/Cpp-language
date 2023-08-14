#include<iostream>
using namespace std;

class binary{
	string s;
	public:
	void getbinary();
	void checkbinary();
	void change();
	void display();
};

void binary :: getbinary(){
	cout<<"Enter youe number :"<<endl;
	cin>>s;
}
int i;
void binary :: checkbinary(){
	
	for(i=0;i<s.length();i++){
		if(s.at(i) != '0' && s.at(i) != '1'){
			cout<<"Not a binart number.";
			exit(0);
		}
	}
}

void binary :: change(){
		for(i=0;i<s.length();i++){
		if(s.at(i)=='0'){
			s.at(i)='1';
		}
		else if(s.at(i)=='1'){
			s.at(i)='0';
		}
	}
}

void binary :: display(){
	cout<<s;
}

int main(){
	binary b;
	b.getbinary();
// 	b.checkbinary();
	b.change();
	b.display();
	return 0;
} 
