#include<iostream>
using namespace std;
int count=0;
class num{
	public:
		num(){
			++count;
			cout<<"this is constructor num "<<count<<endl;
		}
		~num(){
			cout<<"constructor num "<<count<<" is destroyed"<<endl;
			--count;
		}
};
int main(){
	cout<<"this is inside main class."<<endl;
	num n1;
	cout<<"this is inside main class."<<endl;
	{
		cout<<"entering block."<<endl<<"creating 2 new obj"<<endl;
		num n2,n3;
		cout<<"exiting block .";
		
	}
	cout<<"back to main.";
	return 0;
} 
