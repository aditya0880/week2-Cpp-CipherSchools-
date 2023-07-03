//friend class

#include<iostream>
using namespace std;

class student{
	string passcode;
	friend class bestfriend;
	public:
		string name;
		int id;
		int age;
		student(int i,string n,string p,int a){
		name = n;
		id = i;
		passcode = p;
		age =a;
		} 
		friend void hacker(student s);
	
};
void hacker(student s){
	cout<<s.passcode<<" "<<s.age<<endl;
}
	class bestfriend{
		public:
			void sharingSecret(student s){
				cout<<s.passcode<<" "<<s.age<<endl;
			}
	};	
	
int main(){
	student s1(1,"mohit","0001",10);
	bestfriend bff;
	hacker(s1);
	return 0;
}