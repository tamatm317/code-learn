#include<iostream>
using namespace std;
int main(){
	int tc;
	cin >> tc;
	for(int i = 1; i<=tc;++i){
		int n;
		cin >> n;
		int count = 0;
		for(int j = 5; j<=n;j+=5){
			int temp = j;
			while(temp%5==0){
				++count;
				temp/=5;
			}
		}
		cout << count << endl;
	}
}