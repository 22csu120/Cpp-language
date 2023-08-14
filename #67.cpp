#include<iostream>
using namespace std;

//template <class T1, class T2>
//float average(T1 x, T2 y){
//	float avg = (x+y)/2;
//	return avg;
template <class T>
void swapp(T &a, T &b){
	T temp = a;
	a=b;
	b=temp;
}
int main(){
	int x=5,y=9;
	swapp(x,y);
	cout<<x<<endl<<y;
	return 0;
} 
