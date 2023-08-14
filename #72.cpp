#include<iostream>
#include<list>
using namespace std;

void display(list<int> &lst){
	list<int> :: iterator itt;
	for(itt=lst.begin() ; itt != lst.end() ; itt++){
		cout<<*itt<<" ";
	}
}
int main(){
	list<int> list1;
	list<int> list2(5);
	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);
	list1.push_back(4);
	list1.push_back(5);
	display(list1);
	
	list<int> :: iterator itt = list2.begin();
	*itt=9;
	itt++;
	*itt=8;
	itt++;
	*itt=7;
	itt++;
	*itt=6;
	itt++;
	*itt=5;
	itt++;
	
	display(list2);
	return 0;
} 
