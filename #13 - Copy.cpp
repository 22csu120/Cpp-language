#include<iostream>
using namespace std;
int main(){
	int i=0;
	int marks[5]={1,2,3,4,5};
//	for(i=0;i<5;i++){
//		cin>>marks[i];
//	}
////	for(i=0;i<5;i++){
////		cout<<"marks of "<<i<<" student are "<<marks[i]<<endl;
////	}
//	int j =0;
//	do{
//		cout<<marks[j]<<endl;
//		j++;
//	}while(j<5);

	int*p = marks;
	for(i=0;i<5;i++){
		cout<<"value at point marks ["<<i<<"] is "<<*(p+i)<<endl;
	}
	return 0;
} 
