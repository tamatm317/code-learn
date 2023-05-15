#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
int ktmin(int a[], int n);
void lkgannhat ( int a[], int n);

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
	cout << "\n\nCac cap gia tri gan nhau: ";
	lkgannhat(a,n);
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

int ktmin(int a[], int n){
	int min = abs(a[0]-a[1]);
	for ( int i =0; i<n-1; i++){
		for ( int j=i+1; j<n; j++){
			if (abs(a[i]-a[j]) < min){
				min = abs(a[i]-a[j]);
			}
		}
	}
	return min;
}

void lkgannhat ( int a[], int n){
	int min = ktmin (a,n);
	for ( int i =0; i<n-1;i++){
		for ( int j=i +1; j<n; j++){
			if ( abs(a[i]-a[j]) == min){
				cout << "("<< a[i]<< "," << a[j] << ") \n";
			}
		}
	}
}	