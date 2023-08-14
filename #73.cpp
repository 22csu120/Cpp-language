#include<iostream>
#include<map>
#include<string>
using namespace std;
void display(map<string,int> &m){
	map<string,int> :: iterator itt;
	for(itt=m.begin(); itt!=m.end() ; itt++){
		cout<<(*itt).first<<" "<<(*itt).second<<endl;
	}
}
int main(){
	map<string , int> marks;
	marks["Harry"] = 67;
	marks["mudi"] = 100;
	marks["rajiv"] = 88;
	marks.insert({{"ayouu",5},{"lol",77}});
	display(m);
	
	return 0;
} 
