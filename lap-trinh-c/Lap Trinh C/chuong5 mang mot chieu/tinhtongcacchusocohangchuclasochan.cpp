#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
bool kiemtra( int n);
int Tinh_tong( int a[], int n);
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
	cout << "\n\nTong cac phan tu co chu so hang chuc la so chan: "<< Tinh_tong(a,n);
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
		cout << a[i] << " ";
	}
}

bool kiemtra(int n){

	if ( n < 10){
		return true;
	}
	else 
	{
		while ( n>=100){
			n/=10;
		}
	}
	if ( n%2 == 0){
		return true;
	}
	return false;
}


int Tinh_tong (int a[],int n){
     int tong = 0;
	for ( int i =0; i<n; i++){
		
		if (kiemtra(a[i])== true){
			tong += a[i];
		}
	}
	return tong;
}