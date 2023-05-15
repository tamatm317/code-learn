#include<iostream>
using namespace std;
int check(int year){
	if((year%4==0&&year%100!=0)||(year%400==0))return 1;
	else return 0;
}
int main(){
	int year,month;
	cin >> month >> year;
	int day = 0;
	if(year<=0 || month<1 || month >12) cout << "INVALID";
	else{
		switch(month){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:{
				cout << 31;
				break;
			}
			case 4:
			case 6:
			case 9:
			case 11:  {
				cout <<30;
				break;
			}
			case 2:{
				if(check(year))cout <<29;
				else cout <<28;
				break;
			}
		}
	}
}