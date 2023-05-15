// #include<vector>
// #include<iostream>
// using namespace std;
// int main(){
// 	int n;
// 	cin >> n;
// 	int * a = new int [n];
// 	for(int i= 0; i<n;++i){
// 		cin >> a[i];
// 	}
// 	for(int i= 0; i<n;++i){
// 		cout << a[i] <<  " ";
// 	}
// 	cout << endl;
// 	int val, pos;
// 	cin >> val >> pos;
// 	++n;
// 	for(int i = n; i>pos; --i){
// 		a[i] = a[i-1];
// 	}
// 	a[pos] = val;
// 	for(int i= 0; i<n; ++i){
// 		cout << a[i] << " ";
// 	}
// 	delete []a;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
	int x;
	int n;
	cin >> n;
	vector<int> a;
	for(int i= n; i>0; --i){
		cin >> x;
		a.push_back(x);
	}
	for(int i = 0; i<n; ++i){
		cout << a[i] << " ";
	}
}
