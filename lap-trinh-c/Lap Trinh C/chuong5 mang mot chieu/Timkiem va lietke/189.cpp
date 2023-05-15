#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
bool ktsonguyento(int n);
void lkntle ( int a[], int n);

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
	cout << "\n\nCac so nguyen to co chu so dau tien la so le: ";
	lkntle(a,n);
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

bool ktsonguyento(int n){
	if ( n<2){
		return false;
	}
	else{
		for ( int i =2; i<n; i++){
			if ( n%i == 0){
				return false;
			}
		}
	}
	return true;
}

void lkntle ( int a[], int n){
	for ( int i =0; i<n; i++){
		if (ktsonguyento(a[i])== true){
			int x = a[i];
			if ( x > 10){
				while ( x>=10){
					x = x/10;
				}
				if ( x%2 == 1){
					cout << a[i] << " ";
				}
			}
			else
			{
				cout << a[i] << " ";
			}
		}
	}
}