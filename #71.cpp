#include<iostream>
#include<vector>
using namespace std;
template <class T>
void display(vector<T> &v){
	for(int i=0 ; i<v.size() ; i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int> vec1;
	vector<char> vec2;
	vec2.push_back('L');
	vec2.push_back('O');
	vector<char> vec3(5,vec2);
	display(vec3);
//	int element ,size;
//	cout<<"Enter size of vector : "<<endl;
//	cin>>size;
//	
//	for(int i=0 ; i<size ; i++){
//		cout<<"Enter for "<<i+1<<" element :";
//		cin>>element;
//		vec1.push_back(element);
//	}
//	display(vec1);
//	vector<int> :: iterator itt = vec1.end();
//	vec1.insert(itt , 5);
////	vec1.pop_back();
//	display(vec1);
	return 0;
} 
