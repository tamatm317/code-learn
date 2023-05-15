#include <iostream>
using namespace std;

void Nhap_mang ( int *a, int n);
void Xuat_mang ( int *a, int n);
bool kttoanchan ( int *a, int n);
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
 	if ( kttoanchan(a,n) == 0){
 		cout << "\nMang co phan tu la gia tri le.";
 	}
 	else{
 		cout << "\bMang co toan so chan.";
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

bool kttoanchan (int *a, int n){
	int kt =0;
	for (int i=0; i<n; i++){
		if (a[i]%2== 0){
			kt =1;
		}
		else{
			kt = 0;
			break;
		}
	}
	return kt;
}
