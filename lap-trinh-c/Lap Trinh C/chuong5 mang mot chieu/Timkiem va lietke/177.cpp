#include <iostream>
using namespace std;


void Nhap_mang(float a[], int n);
void Xuat_mang(float a[], int n);
void lietkexy ( float a[], int n, float x, float y);

int main(){
	float a[100];
	int n;
	float x,y;
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
	cout << "\nCac gia tri thuoc doan ["<<x << ","<< y << "] la: ";
	lietkexy(a,n,x,y);
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

void lietkexy ( float a[], int n, float x, float y){
	for ( int i =0; i<n; i++){
		if ( a[i]>=x && a[i]<=y){
			cout << a[i] << " ";
		}
	}
}