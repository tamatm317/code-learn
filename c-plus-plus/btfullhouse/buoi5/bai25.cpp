#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> a = {1000,500,200,100,50,20,10,5,2,1};
	int n = 10;
	int t;
	cin >> t;
	while(t!=0){
		long long k, res = 0;
		cin >>k;
		for(int i = 0; i<a.size();++i){
			int temp = k/a[i];
			res+=temp;
			k%=a[i];
		}
		cout << res << endl;
		--t;
	}
}
