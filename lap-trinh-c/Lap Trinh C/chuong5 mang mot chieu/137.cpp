#include <iostream>
using namespace std;


void Nhap_mang(float a[], int n);
void Xuat_mang(float a[], int n);
void vitrinhonhat ( float a[], int n);

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
	cout << "\n\nVi tri nho nhat trong mang la: ";
	vitrinhonhat(a,n);
	system("pause");
	return 0;
}
void Nhap_mang ( float a[], int n){
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

void vitrinhonhat ( float a[], int n){
	float vitrimin = 0;
	float min ;
	for ( int i =1; i<n; i++){
		if ( a[i] < min){
			vitrimin = i;
			min = a[i];
		}
	}
	cout << vitrimin << " ";
}