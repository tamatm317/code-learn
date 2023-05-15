#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a==0){
		if(b==0){
			if(c==0) cout << "INF";
			else cout << "NO";
		}
		else cout << -c/b;
	}
	else{
		float delta = pow(b,2) - 4*a*c;
		if(delta<0) cout << "NO";
		else{
			if(delta==0) cout << fixed << setprecision(2) << -b/(2*a);
			else{
				float x1 = (-b+sqrt(delta))/(2*a)*1.0;
				float x2 = (-b-sqrt(delta))/(2*a)*1.0;
				cout << fixed << setprecision(2) << x1 << " " << x2;
			}
		}
	}
}