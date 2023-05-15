#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
bool kttoanle(int n);
void lktoanle ( int a[], int n);

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
	cout << "\n\nCac gia tri co toan chu so le: ";
	lktoanle(a,n);
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

bool kttoanle(int n){
	int x =n;
	int dv;
	while ( x!=0){
		dv = x%10;
		if ( dv%2 == 1){
			x/=10;
		}
		else
		{
			return false;
		}
	}
	if ( x == 0){
		return true;
	}
}

void lktoanle ( int a[], int n){
	for ( int i =0; i<n; i++){
		if ( kttoanle(a[i]) == true){
			cout << a[i] << " ";
		}
	}
}	