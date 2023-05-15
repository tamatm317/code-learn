#include <iostream>
using namespace std;


void Nhap_mang(double a[], int n);
void Xuat_mang(double a[], int n);
void lonnhat ( double a[], int n);

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
	cout << "\n\nGia tri lon nhat trong mang la: ";
	lonnhat(a,n);
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

void lonnhat ( double a[], int n){
	double max = a[0];
	for ( int i =1; i<n; i++){
		if ( a[i]> max){
			max = a[i];
		}
	}
	cout << max;
}