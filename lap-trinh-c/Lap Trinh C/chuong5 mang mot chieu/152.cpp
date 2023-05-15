#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
int hoanthiennhonhat(int a[], int n);
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
	cout << "\n\nSo hoan thien nho nhat trong mang la: "<< hoanthiennhonhat(a,n);
	system("pause");
	return 0;
}
void Nhap_mang (int a[], int n){
	for ( int i = 0; i < n; i++){
		cout << "\nNhap phan tu mang a["<< i<< "] = ";
		cin >> a[i];
	}
}
void Xuat_mang (int a[], int n){
	for ( int i = 0; i < n; i++){
		cout << a[i] << "  ";
	}
}


int hoanthiennhonhat (int a[],int n){
	int ketqua = 0;
	int min;
	for ( int i = 0; i<n; i++){
		
		int tong = 0;
		for ( int j = 1; j< a[i]; j++){
			if ( a[i]% j == 0){
				tong += j;
			}
		}
	    if ( a[i]== tong && a[i] < min){
	    	min = a[i];
	    	ketqua = a[i];
	    }	
	}
    return ketqua;

}