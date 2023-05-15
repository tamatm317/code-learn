#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(float a[], int n);
void Xuat_mang(float a[], int n);
void timvitri (float a[], int n);

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
    cout << "\nVi tri thoa man dieu kien la: ";
    timvitri(a,n);
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


void timvitri (float a[], int n){
    int dem = 0;
    for ( int i =1; i<n-1; i++){
        if ( a[i-1]*a[i+1] == a[i]){
            dem ++;
            break;
        }
    }
    for ( int i =1; i<n-1; i++){
        if ( a[i-1]*a[i+1] == a[i]){
            cout << i << " ";
        }
    }
    if ( dem == 0){
        cout << "  -1 ";
    }
}