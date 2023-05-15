// ceil : lam tron lên, floor làm tròn xuống.
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float a,b;
	cin >> a >> b;
	int c = ceil(a), d = floor(b);
	cout << d-c+1;
}