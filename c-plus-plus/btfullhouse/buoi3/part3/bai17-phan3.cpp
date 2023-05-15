#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int check = 1, res = n;
	while(res>0){
		int temp = res%10;
		if(temp!=6&&temp!=8&&temp!=0){
			check = 0;
			break;
		}
		res/=10;
	}
	if(check==1) cout << "1";
	else cout << 0;
}