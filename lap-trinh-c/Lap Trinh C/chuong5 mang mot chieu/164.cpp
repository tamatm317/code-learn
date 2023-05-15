#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
int ktsoganh  (int n);
void timsoganh (int a[], int n);

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
    cout << "\nSo ganh dau tien trong mang la: ";
    timsoganh(a,n);
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


int ktsoganh (int n){
    int t =n;
    int ss = 0;
    int dv = 0;
    while ( t !=0){
        dv = t%10;
        ss = ss*10+dv;
        t = t/10;
    }
    if ( n == ss){
        return 1;
    }
    return 0;
}

void timsoganh( int a[], int n){
    for ( int i =0; i<n; i++){
        if ( ktsoganh(a[i])== 1){
            cout << a[i];
            break;
        }
    }
}