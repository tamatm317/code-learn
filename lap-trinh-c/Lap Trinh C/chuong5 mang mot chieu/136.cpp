#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
void chancuoi ( int a[], int n);

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
	cout << "\n\nSo chan cuoi cung trong mang la: ";
	chancuoi(a,n);
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

void chancuoi ( int a[], int n){
	int chan_cuoi ;
	for ( int i = n-1; i>=0; i--){
		if ( a[i] %2 ==  0){
			chan_cuoi = a[i];
			break;
		}
		else {
			chan_cuoi =-1;
		}
	}

	cout << chan_cuoi;
}