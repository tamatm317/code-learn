#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
bool ktdauchan(int n);
void lietkedauchan ( int a[], int n);

int main(){
	int a[100];
	int n;
	do 
	{
		cout << "\nHay nhap so luong phan tu mang: ";
		cin >> n;
		if ( n<=0 || n>100)
		{
			cout <<"\nSo luong phan tu khong hop le, vui long nhap lai: ";
		}
	} while ( n<=0 || n>100);
	cout << "\n\n\t\tNHAP MANG\n";
	Nhap_mang(a,n);
	cout << "\n\n\t\tXUAT MANG\n";
	Xuat_mang(a,n);
	cout << "\n\nCac gia tri co chu so dau la so chan: ";
	lietkedauchan(a,n);
	system("pause");
	return 0;
}
void Nhap_mang ( int a[], int n){
	for ( int i = 0; i < n; i++){
		cout << "\nNhap phan tu mang a["<< i<< "] = ";
		cin >> a[i];
	}
}
void Xuat_mang (int a[], int n){
	for ( int i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
}

bool ktdauchan(int n){
	int x = n;
	if ( x <10){
		if ( x%2 == 0){
			return true;
		}
	}
	else{
		while ( x>=10){
			x/=10;
		}
		if ( x%2 == 0){
			return true;
		}
	}
	return false;
}

void lietkedauchan ( int a[], int n){
	for ( int i =0; i<n; i++){
		if ( ktdauchan(a[i]) == true){
			cout << a[i] << " ";
		}
	}
}	