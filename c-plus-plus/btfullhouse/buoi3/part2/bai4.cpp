#include<iostream>
using namespace std;
int count(int n, int p){
	int ans = 0;
	for(int i = p;i<=n; ++i){
		int temp = i;
		while(temp%p==0){
			++ans;
			temp/=p;
		}
	}
	return ans;
}
int main(){
	int test_case ;
	cin >> test_case;
	for(int i = 1; i<=test_case;++i){
		int n,p;
		cin >> n >> p;
		cout << count(n,p) << endl;;
	}
}