#include<iostream>
using namespace std;

class bankdeposite{
	int years;
	int money;
	float intrest;
	float returnvalue;
	public:
		bankdeposite(){
		}
		bankdeposite(int m,int y,int r);
		bankdeposite(int m,int y,float r);
		void show();
};
int i;
bankdeposite :: bankdeposite(int m,int y,int r){
	float temp = float(r)/100;
	years = y;
	money =m;
	intrest = temp;
	returnvalue = money;
	for(i=0;i<y;i++){
		returnvalue = returnvalue*(1+intrest);
	}
}
	
bankdeposite :: bankdeposite(int m,int y,float r){
	
	years = y;
	money =m;
	intrest = r;
	returnvalue = money;
	for(i=0;i<y;i++){
		returnvalue = returnvalue*(1+intrest);
	}
}

void bankdeposite::show(){
	cout<<"your "<<money<<" after "<<years<<" years are"<<returnvalue<<" with interst rate of "<<intrest<<endl;
}

int main(){
	int m,y;
	float r;
	cout<<"Enter money , years and intrest rate :"<<endl;
	cin>>m>>y>>r;
	bankdeposite bd1,bd2,bd3;
	bd1 = bankdeposite(m,y,r);
	bd1.show();
	
	return 0;
} 
