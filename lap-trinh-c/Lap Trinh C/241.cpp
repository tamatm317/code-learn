#include <iostream>
using namespace std;

void Nhap_mang ( int *a, int n);
void Xuat_mang ( int *a, int n);
int haikhong ( int *a, int n);

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
 	delete []a;
 	if ( haikhong(a,n) == 0){
 		cout << "\nMang khong ton tai hai giai tri lien tiep.";
 	}
 	else{
 		cout << "\nMang co ton tai 2 gia tri lien tiep.";
 	}
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

int haikhong (int *a, int n){
	int trave = 0;
	for ( int i =0; i<n; i++){
		if (a[i] == a[i+1]-1 || a[i] == a[i-1]+1){
			trave = 1;
			break;
		}
	}
	return trave;
}