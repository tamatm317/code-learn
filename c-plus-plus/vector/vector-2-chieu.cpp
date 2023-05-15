#include<iostream>
#include<vector>
using namespace std;
void input(vector<int> a, int n){
	for(int i= 0; i<n; ++i){
		int x;
		cin >> x;
		a.push_back(x);
	}
}
vector<int> fn(vector<int> a){
	return a;
}
int main(){
	int n;
	cin >> n;
	vector<int> a;
	input(a,n);

	fn(a);
	return 0;
}