#include <iostream>
#include <cmath>

using namespace std;
bool Kiem_tra (float n,float m);
int main()
{
	int n,m;
	cout << "\nHay nhap n: "; 
	cin >> n;
	cout << "\nHay nhap m: ";  
	cin >> m;
	if ( Kiem_tra(n,m) == true ){
		cout << n << " va "<< m << " cung dau.";
	}
	else{
		cout << n << " va "<< m << " khong cung dau.";
	}
	
	return 0;
}

bool Kiem_tra (float n, float m)
{
	if ( n>0 && m>0 ){
		return true;
	}
	else if ( m<0 && n<0){
		return true;
	}
	else if (n>0 && m<0 ){
		return false;
	}
	else if ( n<0 && m>0){
		return false;
	}
}