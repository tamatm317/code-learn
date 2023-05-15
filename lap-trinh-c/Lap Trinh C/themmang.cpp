#include <iostream>
using namespace std;

void Nhap_mang ( int a[], int n){
	for ( int i =0; i<n; i++){
		cout << "\nHay nhap phan tu mang a["<< i << "] = ";
		cin >> a[i];
	}
}
void Xuat_mang ( int a[], int n){
	for ( int i =0; i<n; i++){
		cout << a[i] << "  ";
	}
}

void Them( int a[], int &n, int x, int k){
	for ( int i = n-1; i>=k; i--){
		a[i+1] = a[i];
	}
	a[k]=x;
	n++;
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

	int x;
	cout << "\nHay nhap gia tri can them: "; cin >> x;
	int k;
	cout << "\nHay nhap vi tri can them trong mang: "; cin >> k;
	Them (a,n,x,k);
	cout << "\n\n\t\tXUAT MANG SAU KHI THEM \n";
	Xuat_mang(a,n);	
	system("pause");
	return 0;
}
