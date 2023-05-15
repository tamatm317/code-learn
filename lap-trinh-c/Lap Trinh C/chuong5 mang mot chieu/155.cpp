#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(float a[], int n);
void Xuat_mang(float a[], int n);
float xanhat (float a[], int n, float x);

int main(){
	float a[100];
	int n;
	float x;
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
	cout << "\n\n\t\tHay nhap gia tri x: \n";
	cin >> x;
	cout << "\n\nGia tri trong mang xa gia tri x nhat la: "<<xanhat(a,n,x);
	system("pause");
	return 0;
}
void Nhap_mang (float a[], int n){
	for ( int i = 0; i < n; i++){
		cout << "\nNhap phan tu mang a["<< i<< "] = ";
		cin >> a[i];
	}
}
void Xuat_mang (float a[], int n){
	for ( int i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
}


float xanhat (float a[], int n, float x){
	float furthest;
	float khoangcach;
	for ( int i =0; i<n; i++){
		if ( abs(a[i]-x)> khoangcach){
			khoangcach = abs(a[i]-x);
			furthest = a[i];
		}
		
	}
	return furthest;
}