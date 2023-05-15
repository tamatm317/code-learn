#include <iostream>
using namespace std;

void Nhap_mang ( int *a, int n);
void Xuat_mang ( int *a, int n);
int satisfying (  int *a, int n);
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
 	cout << "\nSo luong phan tu thoa man dieu kien: " << satisfying(a,n);
 	delete []a;
 	system("pause");
 	return 0;
 }

 void Nhap_mang (  int *a, int n){
	for ( int i =0; i<n; i++){
		cout << "\nNhap phan tu mang a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat_mang (  int *a, int n){
	for ( int i =0; i<n; i++){
		cout << a[i] << " ";
	}
}

int satisfying ( int *a, int n){
	int max = a[0];
	int count = 0;
	bool test;
	for ( int i =0; i<n; i++){
		if ( a[i] > max){
			max = a[i];
			test = true;
		}
		if ( test == true){
			count ++;
		}
	}
	return count;
}

