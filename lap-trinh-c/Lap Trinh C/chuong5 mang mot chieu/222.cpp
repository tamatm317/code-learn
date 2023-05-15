#include <iostream>

using namespace std;

void Nhap_mang ( int *a, int n);
void Xuat_mang ( int *a, int n);
void demtraidau ( int *a, int n);

 int main(){
 	int n;
 	do
 	{
 		cout << "\nHay nhap so luong phan tu mang: ";
 		cin >> n;
 		if ( n<=0){
 			cout << "\nVui long nhap n >0: ";
 		}
 	}while ( n <=0);
 	int *a = new int [n];
 	cout << "\n\n\t\tNHAP MANG \n";
 	Nhap_mang(a,n);
 	cout << "\n\n\tXuat_mang\n";
 	Xuat_mang(a,n);
 	cout << "\n\n\t\tSo luong phan tu ke nhau ma cac hai so trai dau nhau: ";
 	demtraidau(a,n);
 	delete []a;
 }
 void Xuat_mang ( int *a, int n){
	for ( int i =0; i<n; i++){
		cout << a[i] << " ";
	}
}

void Nhap_mang ( int *a, int n){
	for ( int i =0; i<n; i++){
		cout << "\nNhap phan tu mang a[" << i << "] = ";
		cin >> a[i];
	}
}

void demtraidau ( int *a, int n){
	int dem = 0;
	for ( int i =0; i<n; i++){
		if (a[i]>0){
			if ( a[i+1] < 0){
				dem++;
			}
			else if ( a[i-1] < 0){
				dem ++;
			}
		}
		else{
			if ( a[i+1] > 0){
				dem ++;
			}
			else if ( a[i-1] > 0){
				dem ++;
			}
		}
	}
	cout << dem << " ";
}