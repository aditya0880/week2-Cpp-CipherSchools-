//conversion

#include<iostream>
using namespace std;

class Time{
	public:
		int hour;
		int m;
		Time(int mins){
			hour = mins/60;
			m = mins%60;
		}
		void display(){
			cout<<hour<<" "<<m<<endl;
		}
};
int main(){
	int min_from_mid_night = 340;
	Time t(min_from_mid_night);
	return 0;
	t.display();
}