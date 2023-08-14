#include<iostream>
using namespace std;
int sum(int a,int b,int c){
	return a+b+c;
}
int sum(float a,int b){
	return a*b;
}
int sa(int a , int b, int c){
	return 2*(a+b+c);
}

int volume(int a , int b , int c){
	return a*b*c;
}
int main(){
//	int a=9,b=4,c=3;
//	cout<<"Enter numbers :"<<endl;
//	cin>>a>>b>>c;
//	cout<<sum(a,b,c)<<endl;
//	cout<<sum(a,c);
	int l ,h,b,n,i;
	cout<<"Enter the number of boxes :";
	cin>>n;
	for(i=1;i<=n;i++){
		cout<<"enter the values for "<<i<<" box :"<<endl;
		cin>>l>>h>>b;
		cout<<"The volume is :"<<volume(l,h,b)<<endl<<"the surface area is :"<<sa(l,h,b)<<endl<<endl<<endl;
		
	}
	return 0;
} 
