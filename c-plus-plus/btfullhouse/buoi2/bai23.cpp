#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin >> n;
	// int so_vi_tri = (pow(n,2)*(pow(n,2)-1))/2;
	// int so_bo = 4*(n-2)*(n-1);
	for(int i = 1; i<=n; ++i){
		long long so_vi_tri = (pow(i,2)*(pow(i,2)-1))/2;
		long long so_bo = 4*(i-2)*(i-1);
		
		cout << so_vi_tri - so_bo << endl;
	}
}