#include <iostream>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
bool ktboba (int a, int b, int c);
void lkboba ( int a[], int n);

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
	cout << "\n\nBo ba gia tri a,b,c thoa a = b+c: ";
	lkboba(a,n);
	system("pause");
	return 0;
}
void Nhap_mang ( int a[], int n){
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

bool ktboba (int a, int b, int c){
	if ( a == b + c){
		return true;
	}
	else if ( b == a+c){
		return true;
	}   
	else if ( c == b+a){
		return true;
	}
	return false;
}

void lkboba ( int a[], int n){
	for ( int i =0; i<n-2; i++){
		int max, min, medium;
		for (int j =i+1; j<n-1; j++){
			for (int k = i+2; k<n; k++){
				if ( a[i] != a[j] && a[i] != a[k] && a[j]!=a[k]){
					if ( ktboba(a[i],a[j],a[k]) == true){
						
						if ( a[i] > a[k] && a[i]> a[k]){
							max = a[i];
							medium = a[k];
							min = a[j];
						}
						else if ( a[j]>a[k] && a[j]> a[i]){
							max = a[j];
							medium = a[k];
							min = a[i];
						}
						else if ( a[k]>a[i] && a[k]>a[j]){
							max = a[k];
							medium = a[j];
							min = a[i];
						}
						cout << "("<< max << ","<< medium << "," << min << ") \n";
					}
				}
			}
		}
	}
}
