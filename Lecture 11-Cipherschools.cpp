//constructor

//complex number
#include<iostream>
using namespace std;

class complexNumber{
	public:
		int real;
		int img;
		
		complexNumber(int real, int img){
			this->real = real;
			this->img = img;
		}
		void display(){
			cout<<real<<"+ i"<<img<<endl;
		}
		complexNumber plus(complexNumber c){
			int r = this->real+c.real;
			int i = this->img+c.img;
			
			complexNumber result(r, i);
				return result;	
		}
		complexNumber multiply(complexNumber c){
			int x = this->real*c.real;
			int y = this->real*c.img;
			int z = this->img*c.real;
			int a = this->img*c.img;
			
			return complexNumber(x-a,y+z);
		}
};
 int main(){
 complexNumber c1(5,5);
 complexNumber c2(1,1);
 complexNumber c4(2,2);
 complexNumber c3 = c1.plus(c2.plus(c4));
 complexNumber c5 = c1.multiply(c2);
 c5.display();
 return 0;
 }