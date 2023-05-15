#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
int hoanthiendau(int a[], int n);
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
	cout << "\n\nSo hoan thien dau tien trong mang la: "<< hoanthiendau(a,n);
	system("pause");
	return 0;
}
void Nhap_mang (int a[], int n){
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


int hoanthiendau (int a[],int n){
	int hoanthien = -1;
	for ( int i = 0; i<n; i++){
		int tong = 0;
		for (int j = 1; j<a[i]; j++){
			
			if ( a[i]% j == 0){
				tong = tong + j;
			}
		}
		if ( a[i] == tong){
			hoanthien = a[i];
			break;
		}
	}
	return hoanthien;
}