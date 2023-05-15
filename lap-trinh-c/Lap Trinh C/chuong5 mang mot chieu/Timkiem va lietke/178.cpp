#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
void lietke ( int a[], int n, int x, int y);

int main(){
	int a[100];
	int n;
	int x,y;
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
	cout << "\nHay nhap doan [x,y]";
	cin >> x;
	cin >> y;
	cout << "\nCac gia tri chan thuoc doan ["<<x << ","<< y << "] la: ";
	lietke(a,n,x,y);
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

void lietke ( int a[], int n, int x, int y){
	for ( int i =0; i<n; i++){
		if ( a[i]%2 == 0 && a[i]>=x && a[i]<=y){
			cout << a[i] << " ";
		}
	}
}