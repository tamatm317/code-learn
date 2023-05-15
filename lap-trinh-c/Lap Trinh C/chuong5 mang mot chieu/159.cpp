#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(float a[], int n);
void Xuat_mang(float a[], int n);
void dautien (float a[], int n);

int main(){
    float a[100];
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
    dautien(a,n);
    system("pause");
    return 0;
}
void Nhap_mang (float a[], int n){
    for ( int i = 0; i < n; i++){
        cout << "\nNhap phan tu mang a["<< i<< "] = ";
        cin >> a[i];
    }
}
void Xuat_mang (float a[], int n){
    for ( int i = 0; i < n; i++){
        cout << a[i] << "  ";
    }
}


void dautien (float a[], int n){
    float max = 0;
    for ( int i =0; i<n; i++){
        if ( a[i] > 2003){
            max = a[i];
            break;
        }
    }
    cout << "\nGia tri dau tien trong mang lon hon 2003: "<< max;
}
