#include <iostream>
using namespace std;

void Nhap_mang( int a[], int n){
	for ( int i =0; i<n; i++){
		cout << "\nHay nhap phan tu mang a["<< i<< "] = ";
		cin >> a[i];
	}
}
void Xuat_mang ( int a[], int n){
	for ( int i = 0; i<n; i++){
		cout << a[i] << " ";
	}
}

void Xoa_mang( int a[], int &n, int k){

	for ( int i = k+1 ; i <= n-1; i++){
		a[i-1] = a[i];
	}
	n--;
}

int main(){
	int a[100];
	int n;
	do
	{
		cout << "\nHay nhap so luong phan tu mang: ";
		cin >> n;
		if (n<=0 || n>100){
			cout << "\nSo luong phan tu mang khong hop le, vui long nhap lai: ";
		}
	} while ( n<=0 || n>100);
	cout <<"\n\n\t\tNHAP MANG \n";
	Nhap_mang(a,n);
	cout << "\n\n\t\tXUAT MANG \n";
	Xuat_mang(a,n);
	int k;
	cout << "\nHay nhap vi tri can xoa: "; cin >> k;
	Xoa_mang(a,n,k);

    cout << "\n\n\t\tXUAT MANG SAU KHI XOA\n";
	Xuat_mang(a,n);
}