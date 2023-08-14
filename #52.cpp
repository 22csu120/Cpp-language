#include<iostream>
using namespace std;

class shop{
	int id;
	float price;
	public:
		void setdata(int a, float b){
			id=a;
			price = b;
		}
		void getdata(){
			cout<<"The id is :"<<id<<endl;
			cout<<"The price is :"<<price<<endl<<endl;
		}
};
int main(){
	int a,n,i;
	float b;
	cout<<"Enter the number of objects :"<<endl<<endl;
	cin>>n;
	shop *ptr = new shop[n];
	shop *ptrtemp = ptr;
	for(i=0;i<n;i++){
		cout<<"Enter id of obj num :"<<i<<endl;
		cin>>a;
		cout<<"enter price of obj num :"<<i<<endl;
		cin>>b;
		(*ptr).setdata(a,b);
		ptr++;
	}
	
	for(i=0;i<n;i++){
		(*ptrtemp).getdata();
		ptrtemp++;
	}
	return 0;
} 
