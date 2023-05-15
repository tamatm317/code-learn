#include <iostream>
using namespace std;


int Nhap_mang(int a[], int n);
int Xuat_mang(int a[], int n);
bool kt5chuc(int n);
int tongchuc ( int a[], int n);

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
	cout << "\n\nCac gia tri co hang chuc la chu so 5: "<< tongchuc(a,n);
	system("pause");
	return 0;
}
int Nhap_mang ( int a[], int n){
	for ( int i = 0; i < n; i++){
		cout << "\nNhap phan tu mang a["<< i<< "] = ";
		cin >> a[i];
	}
}
int Xuat_mang (int a[], int n){
	for ( int i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
}

bool kt5chuc(int n){
	int x =n;
	if ( x<10){
		return false;
	}
	else{
		if ( n>=10 && n<100){
			x/=10;
		}
		if ( x == 5){
			return true;
		}
		else if ( x>=100){
			int dv;
			x /=10;
			dv = x%10;
			if ( dv == 5){
				return true;
			}
		}
	}	
	return false;
}

int tongchuc ( int a[], int n){
	int tong = 0;
	for ( int i =0; i<n; i++){
		if ( kt5chuc(a[i]) == true){
			tong +=a[i];
		}
	}
	return tong;
}