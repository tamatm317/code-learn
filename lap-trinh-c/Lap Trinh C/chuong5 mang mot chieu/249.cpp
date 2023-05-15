#include <iostream>
using namespace std;

void Nhap_mang ( float *a, int n);
void Xuat_mang ( float *a, int n);
bool ktgiam (  float *a, int n);
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
 	float *a = new float [n];
 	cout << "\n\n\t\tNHAP MANG \n";
 	Nhap_mang(a,n);
 	cout << "\n\n\tXuat_mang\n";
 	Xuat_mang(a,n);
 	if ( ktgiam(a,n) == true){
 		cout << "\nMang giam dan.";
 	}
 	else{
 		cout << "\nMang khong giam dan.";
 	}
 	delete []a;
 	system("pause");
 	return 0;
 }

 void Nhap_mang (  float *a, int n){
	for ( int i =0; i<n; i++){
		cout << "\nNhap phan tu mang a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat_mang (  float *a, int n){
	for ( int i =0; i<n; i++){
		cout << a[i] << " ";
	}
}

bool ktgiam ( float *a, int n){
	bool kt;
	int min =a [0];
	for ( int i=1; i<n; i++){
		if ( a[i] < min){
			min =a[i];
			kt = true;
		}
		else{
			kt = false;
			break;
		}
	}
	return kt;
}

