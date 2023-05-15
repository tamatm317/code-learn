#include<iostream>
using namespace std;
long long binpow(long a, long b){
	long long res = 1;
	while(b>0){
		if(b&1){//so sánh bit của b với 1 nếu khác thì tiếp tục thực hiện
			res *=a;
		}
		a *=a;
		b>>=1;//dịch b sang phải 1 bit
	}
	return res;
}
int main(){
	int tc;
	cin >> tc;
	for(int i =1; i<=tc;++i){
		long long a,b;
		cin >> a >> b;
		cout << binpow(a,b) << endl;
	}
}