#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){
	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void sum(vector<int> &v1, vector<int> &v2){
	for(int i=0 ; i<v1.size() ; i++){
		int a = v1[i]+v2[i];
		cout<<a<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> vec1,vec2;
	int element ,size;
	cout<<"Enter size of vector : "<<endl;
	cin>>size;
	
	for(int i=0 ; i<size ; i++){
		cout<<"Enter for "<<i+1<<" element :";
		cin>>element;
		vec1.push_back(element);
	}
	for(int i=0 ; i<size ; i++){
		cout<<"Enter for "<<i+1<<" element :";
		cin>>element;
		vec2.push_back(element);
	}
	cout<<"First vector :"<<endl;
	display(vec1);
	cout<<"second vector :"<<endl;
	display(vec2);
	sum(vec1,vec2);
	return 0;
} 
