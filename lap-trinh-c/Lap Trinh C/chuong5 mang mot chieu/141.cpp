#include <iostream>
using namespace std;


void Nhap_mang(float a[], int n);
void Xuat_mang(float a[], int n);
float vtduongnhonat (float a[], int n);

int main(){
	float a[100];
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
	cout << "\n\nVi tri gia tri duong nho nhat trong mang la: "<< vtduongnhonat(a,n);
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


float vtduongnhonat (float a[], int n){
	int dem = 0;
	float min ;
	int vitri;
	for ( int i = 0;i < n; i++){
		if ( a[i] > 0){
			dem++;
			break;
		}
	}
	if( dem > 0){
		
		for ( int i =0; i<n;i ++){
			if ( a[i]>0 && a[i]<min){
				min = a[i];
				vitri = i;
			}
		}
	}
	else{
		vitri = -1;
	}	
	return vitri;
}