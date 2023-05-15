#include <iostream>
using namespace std;
#define MAX 100
//dung ham
void Nhap_mang ( int arr[], int n){
	for ( int i = 0; i<n; i++){
		cout << "\nHay nhap phan tu arr["<< i << "] = ";
		cin >> arr[i];}
}

int Tinh_tong ( int arr[], int n){
	int tong = 0;
	for ( int i =0; i<n; i++){
		tong += arr[i]; // Tong = tong + arr[i]
	}
	return tong;
}

int main(){
	int arr[MAX];
	int n;
	do{
		cout << "\nNhap so luong phan tu cua mang: ";
		cin >> n;   //nhap so luong phan tu
		if ( n<=0 || n>MAX){
			cout << "\nSo luong phan tu mang khong hop le, vui long nhap lai: ";
			system("pause");
		}
	}while ( n<= 0 || n>MAX);
	cout << "\n\n\t\tNhap mang\n";
	Nhap_mang(arr,n);
	cout << "\n\n\t\tTinh tong\n";
	cout << "\t" << Tinh_tong(arr,n)<< "\n";
}