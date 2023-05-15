#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
bool toansole (int x);
void thoadieukien (int a[], int n);

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
    cout << "\nGia tri thoa dieu kien la: ";
    thoadieukien(a,n);
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

bool toansole(int x){
    int n = x;
    int dv;
    while ( x != 0){
        dv = n%10;
        if ( dv%2 == 1){
            n = n/10;
        }
        else 
        {
            break;
        }
    }
    if ( n == 0){
        return true;
    }
}

void thoadieukien( int a[], int n){
    int max ;
    int dem =0;
    for (int i =0;i<n; i++){
        if ( toansole(a[i])== true && a[i]>max){
            max = a[i];
            dem ++;
        }
    }
    if ( dem == 0){
        cout << " 0 ";
    }
    else
    {
       cout << max;
    }
}