#include<iostream>
using namespace std;

class student{
	protected:
		int roll_num;
	public:
		void set_rollnum(int);
		void get_rollnum();
};
void student :: set_rollnum(int r){
		roll_num = r;
}
void student :: get_rollnum(){
	cout<<"the roll num is "<<roll_num<<endl;
}

class exam :public student{
	protected:
		float maths;
		float physics;
	public:
		void set_marks(float m,float p){
			maths = m;
			physics = p;
		}
		void get_marks(){
			cout<<"maths is "<<maths<<endl;
			cout<<"physics is "<<physics<<endl;
		}
};

class result : public exam{
	public:
		void percentage(){
			cout<<"the percentage is "<<(maths+physics)/2<<endl;
		}
};
int main(){
	result e;
	e.set_rollnum(320);
	e.set_marks(54,90);
	e.percentage();
	return 0;
} 
