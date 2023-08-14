#include<iostream>
using namespace std;
template <class T>
class vector{
	public:
		T* arr;
		int size;
		vector(int a){
			size = a;
			arr = new int[size];
		}
		T dotproduct(vector &v){
			int d = 0;
			for(int i=0; i<size; i++){
				d += this->arr[i] * v.arr[i];
			}
			return d;
		}
		
};
int main(){
	vector v1(3);
	v1.arr[0] = 3;
	v1.arr[1] = 34;
	v1.arr[2] = 33;
	
	vector v2(3);
	v2.arr[0] = 1;
	v2.arr[1] = 4;
	v2.arr[2] = 5;
	
	iT a = v1.dotproduct(v2);
	cout<<a;
	return 0;
} 
