#include <iostream>
using namespace std;

void Nhap_mang ( int *a, int n);
void Xuat_mang ( int *a, int n);
bool ktdangsong (  int *a, int n);
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
 	if ( ktdangsong(a,n) == true){
 		cout << "\nMang co dang song.";
 	}
 	else{
 		cout << "\nMang khong co dang song.";
 	}
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

bool ktdangsong ( int *a, int n){
	bool kt;
	for ( int i =1; i<n-1; i++){
		if ( a[i-1] < a[i] && a[i] > a[i+1]){
			kt =true;
		}
		else if ( a[i-1]>a[i] && a[i] < a[i+1]){
			kt = true;
		}
		else{
			kt = false;
			break;
		}
	}
	return kt;
}

