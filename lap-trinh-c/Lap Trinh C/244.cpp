#include <iostream>
using namespace std;

void Nhap_mang ( int *a, int n);
void Xuat_mang ( int *a, int n);
bool ktsohoanthien ( int n);
int kttinhchat ( int *a, int n);

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
 	if ( kttinhchat(a,n) == 0){
 		cout << "\nMang khong thoa man tinh chat.";
 	}
 	else
 	{
 		cout << "\nMang thoa mann tinh chat.";
 	}
 	delete []a;
 	system("pause");
 	return 0;
 }

 void Nhap_mang ( int *a, int n){
	for ( int i =0; i<n; i++){
		cout << "\nNhap phan tu mang a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat_mang ( int *a, int n){
	for ( int i =0; i<n; i++){
		cout << a[i] << " ";
	}
}

bool ktsohoanthien( int n){
	int tong =0;
	for (int i =1; i<n; i++){
		if ( n%i == 0){
			tong += i;
		}
	}
	if ( n == tong){
		return true;
	}
	return false;
}

int kttinhchat ( int *a, int n){
	int trave =1;
	for ( int i =0; i<n; i++){
		if ( ktsohoanthien(a[i]) == true && a[i]>256){
			trave = 0;
			break;
		}
	}
	return trave;
}