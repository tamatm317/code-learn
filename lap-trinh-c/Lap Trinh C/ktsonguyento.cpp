#include <iostream>
using namespace std;
#define MAX 100

void Nhap_mang( int a[], int n){
	for ( int i=0; i<n; i++){
		cout << "\nHay nhap phan tu mang a["<< i << "] = ";
		cin >> a[i];
	}
}

void Xuat_mang ( int a[], int n){
	for ( int i =0; i<n; i++){
		cout << a[i] << " ";
	}
}

bool kiem_tra_so_nguyen_to(int n){
	bool kt = true;
	if ( n<2){
		kt = false;
	}
	else
	{
		for ( int i = 2; i<n; i ++){
			if ( n%i == 0){
			     kt = false;
			     break;
			}
		}
	}
	return kt;
}

void Xuat_so_nguyen_to ( int a[], int n){
	for ( int i=0; i<n; i++){
		if ( kiem_tra_so_nguyen_to(a[i]) == true){
			cout << a[i] << " ";
		}
		else
		{
			break;
		}
	}
}

void Xuat_so_sieu_nguyen_to( int a[], int n){
	for ( int i =0; i<n; i++){
		bool kt = true;
		int tam = a[i];
		while (  tam  != 0){
			if ( kiem_tra_so_nguyen_to(a[i]) == true)
			{
			     tam = tam /10;
			}
			else
			{
				kt = false;
				break;
			}
		}
		if ( kt == true){
			cout << a[i] << " ";
		}
		else
		{
			break;
		}
    }
}

int main(){
	int a[MAX];
	int n;
	do {
		cout << "\nHay nhap so luong phan tu cua mang : ";
		cin >> n;
		if ( n<=0 || n>MAX){
			cout << "\nSO luong phan tu khong hop le, vui long nhap lai: ";
		}
	}
	while ( n<=0|| n>MAX);

	cout << "\n\n\t\tNhap mang\n";
	Nhap_mang(a,n);
	cout << "\n\n\t\tXuat mang\n";
	Xuat_mang(a,n);
	cout << "\n\t\txuat so nguyen to  ";
	Xuat_so_nguyen_to(a,n);
    cout << "\n\t\tXuat so sieu nguyen to  ";
    Xuat_so_sieu_nguyen_to(a,n);
    system("pause");
    return 0;
}