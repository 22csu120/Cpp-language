#include<iostream>
using namespace std;

class shop{
	int ID[100];
	int price[100];
	int counter;
	public:
		void display();
		void setid();
		void incounter(){counter =0;
		}
};

void shop :: setid(){
	cout<<"set id number for "<<counter+1<<" item :";
	cin>>ID[counter];
	cout<<"set price for "<<counter+1<<" item :"<<endl;
	cin>>price[counter];
	counter++;
}

void shop :: display(){
	int i;
	for(i=0;i<counter;i++){
		cout<<"the item id "<<ID[i]<<" has "<<price[i]<<" Rs price"<<endl;
	};
}
int main(){
	shop dukan;
	int i,n;
	cout<<"enter the number of items :";
	cin>>n;
	dukan.incounter();
	for(i=0;i<n;i++){
			dukan.setid();
	}
	dukan.display();
	return 0;
} 
