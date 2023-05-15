#include <iostream>
using namespace std;

void Nhap_mang ( int *a, int n);
void Xuat_mang ( int *a, int n);
void lietke (int *a, int n);

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
 	cout << "\n\n\t\tCAC GIA TRI XUAT HIEN QUA MOT LAN \n";
 	lietke(a,n);
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

void lietke (int *a, int n){
	
	for ( int i = 0; i<n; i++){
		int dem = 0;
		for ( int j = 0; j<n; j++){
			if (a[i] == a[j]){
				if ( j<i){
					break;
				}
				else dem ++;
			}
		}
	if ( dem > 1){
		cout << a[i] << "  ";
	}
	}
}