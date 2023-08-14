#include<iostream>
using namespace std;
class student{
	protected:
		int rollnum;
	public:
		void getroll(int a){
			rollnum=a;
		}
		void showroll(){
			cout<<"roll num is "<<rollnum<<endl;
		}
};

class test : public virtual student{
	protected:
		int maths,sst;
	public:
		void getmatks(int a,int b){
			maths =a;
			sst = b;
		}
		void showmarks(){
			cout<<"maths is : "<<maths<<endl<<"sst is : "<<sst<<endl;
		}
};

class sports: public virtual student{
	protected:
		int score;
	public:
		void getscore(int a){
			score = a;
		}
		void showscore(){
			cout<<"score is :"<<score<<endl;
		}
};

class derived: public sports, public test{
	public :
		void shows(){
			showroll();
			showmarks();
			showscore();
		}
};
int main(){
	derived d;
	d.getroll(223);
	d.getmatks(34,65);
	d.getscore(56);
	d.shows();
	return 0;
} 
