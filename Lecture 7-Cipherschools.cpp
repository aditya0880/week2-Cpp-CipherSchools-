//classes

//1.
#include<iostream>
using namespace std;

class student{
	string passcode;
	public:
		string name;
		int id;
		
		void into(){
			cout<<"My name is "<<name<<" , my id is "<<id<<" passcode is "<<passcode;
		
		}
			void setPass(string S){
				passcode = S;
			}
};
int main(){
	student s1;
	s1.name = "Mohit";
	s1.id = 1;
	s1.setPass("0001");
	s1.into();
	return 0;
}

//2.
#include<iostream>
using namespace std;

class student{
	string passcode;
	public:
		string name;
		int id;
		
		void into(){
			cout<<"My name is "<<name<<" , my id is "<<id<<" passcode is "<<passcode;
		
		}
			void setPass(string s){
				passcode = s;
			}
			friend class bestfriend;
};

class bestfriend{
	public:
		void sharingSecret(student s){
			cout<<s.passcode<<endl;
		}
};
int main(){
	student s1;
	s1.setPass("0001");
	
	bestfriend bff;
	bff.sharingSecret(s1);
	return 0;
}

//3.
#include<iostream>
using namespace std;

class student{
	string passcode;
	friend class bestfriend;
	
	protected:
		int age;
	public:
		string name;
		int id;
		
		void into(){
			cout<<"My name is "<<name<<" , my id is "<<id<<" passcode is "<<passcode;
		
		}
			void setPass(string s){
				passcode = s;
			}
			friend void hacker(student s);
			
};
void hacker(student s){
	cout<<s.passcode<<" "<<s.age<<endl;
}

class bestfriend{
	public:
		void sharingSecret(student s){
			cout<<s.passcode<<s.age<<endl;
		}
};
int main(){
	student s1;
	s1.setPass("0001", 10);
	
	bestfriend bff;
	//bff.sharingSecret(s1);
	hacker(s1);
	return 0;
}