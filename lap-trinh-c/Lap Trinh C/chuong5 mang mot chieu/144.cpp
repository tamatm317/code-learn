#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
bool kiemtrasonguyento(  int n);
int nguyentodau(int a[], int n);
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
	cout << "\n\nSo nguyen to dau tien trong mang la: "<< nguyentodau(a,n);
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

bool kiemtrasonguyento(int n){
	bool kt= true;
	if ( n <2){
			kt = false;
		}
		else{
			for ( int j =2; j<n; j++){
				if (n%j == 0){
					kt =false;
				}
			}
		}
	return kt;
		
}


int nguyentodau (int a[],int n){
	int ntdau = -1;
	for ( int i =0; i<n; i++){
		if ( kiemtrasonguyento(a[i])== true){
			ntdau = a[i];
			break;
		}
	}
	return ntdau;
}