#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int test_case;
	cin >> test_case;
	for(int i=1; i<=test_case;++i){
		int l,r;
		cin >> l >> r;
		int count = 0;
		for(int j=l;j<=r;++j){
			int x = sqrt(j);
			if(x*x==j)++count;
		}
		cout << count << endl;
	}
}