#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
void dautien2k (int a[], int n);

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
    cout << "\nGia tri dau tien trong mang co dang 2^k: ";
    dautien2k(a,n);
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

void dautien2k (int a[], int n){
    int dem = 0;
    int dautien;
    for (int i =0; i<n; i++){
        for ( int j =1; j<a[i]; j++){
            if( pow(2,j) == a[i]){
                dem ++;
                dautien = a[i];
                break;
            }
        break;}
    }
    if ( dem != 0){
        cout << " 0 ";
    }
    else{
    cout << dautien << " ";
    }
}