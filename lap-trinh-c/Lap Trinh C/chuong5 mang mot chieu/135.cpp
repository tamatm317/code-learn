#include <iostream>
using namespace std;


void Nhap_mang(double a[], int n);
void Xuat_mang(double a[], int n);
void duongdau ( double a[], int n);

int main(){
	double a[100];
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
	cout << "\n\nGia tri duong dau tien trong mang la: ";
	duongdau(a,n);
	system("pause");
	return 0;
}
void Nhap_mang ( double a[], int n){
	for ( int i = 0; i < n; i++){
		cout << "\nNhap phan tu mang a["<< i<< "] = ";
		cin >> a[i];
	}
}
void Xuat_mang (double a[], int n){
	for ( int i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
}

void duongdau ( double a[], int n){
	double duong_dau = -1;
	for ( int i = 0; i<n; i++){
		if ( a[i]> 0){
			duong_dau = a[i];
			break;
		}
	}
	cout << duong_dau;
}