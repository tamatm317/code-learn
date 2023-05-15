#include <iostream>
using namespace std;

void Nhap_mang_a ( int *a, int n);
void Xuat_mang_a ( int *a, int n);
void Nhap_mang_b ( int *b, int m);
void Xuat_mang_b ( int *b, int m);
void demgiatri ( int *a, int *b, int n, int m);

int main(){
 	int n,m;
 	do
 	{
 		cout << "\nHay nhap so luong phan tu mang a: ";
 		cin >> n;
 		if ( n<=0){
 			cout << "\nVui long nhap n >0: ";
 		}
 	}while ( n<=0);
 	
 	do
 	{
 		cout << "\nHay nhap so luong phan tu mang b: ";
 		cin >> m;
 		if ( m<=0){
 			cout << "\nVui long nhap m >0: ";
 		}
 	}while ( m<=0);
 	int *a = new int [n];
 	int *b = new int [m];
 	cout << "\n\n\t\tNHAP MANG 1\n";
 	Nhap_mang_a(a,n);
 	cout << "\n\n\tXUAT MANG 1\n";
 	Xuat_mang_a(a,n);
 	cout << "\n\n\t\tNHAP MANG 2\n";
 	Nhap_mang_b(b,m);
 	cout << "\n\n\tXUAT MANG 2\n";
 	Xuat_mang_b(b,m);
 	cout << "\n\n\t\t GIA TRI CHI XUAT HIEN MOT TRONG HAI MANG ";
 	demgiatri(a,b,n,m);
 	delete []a;
 	delete []b;
 	system("pause");
 	return 0;
 }

 void Nhap_mang_a ( int *a, int n){
	for ( int i =0; i<n; i++){
		cout << "\nNhap phan tu mang a[" << i << "] = ";
		cin >> a[i];
	}
}
void Xuat_mang_a ( int *a, int n){
	for ( int i =0; i<n; i++){
		cout << a[i] << " ";
	}
}

void Nhap_mang_b ( int *b, int m){
	for ( int i =0; i<m; i++){
		cout << "\nNhap phan tu mang a[" << i << "] = ";
		cin >> b[i];
	}
}
void Xuat_mang_b ( int *b, int m){
	for ( int i =0; i<m; i++){
		cout << b[i] << " ";
	}
}

void demgiatri ( int *a, int *b, int n, int m){
	int count = 0;
	for (int i =0; i<n; i++){
		int dem = 1;
		for ( int j =0; j<m; j++){
			if ( a[i] == b[j]){
				dem ++;
			}
		}
		if ( dem == 1){
			count ++;
		}
	}
	for (int j =0; j<m; j++){
		int dem =1;
		for ( int i =0; i<n; i++){
			if ( b[j] == a[i]){
				dem ++;
			}
		}
		if ( dem == 1){
			count ++;
		}
	}
	cout << count << " ";
}