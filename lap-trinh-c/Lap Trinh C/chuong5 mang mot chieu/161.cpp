#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(float a[], int n);
void Xuat_mang(float a[], int n);
int dautientrongmang (float a[], int n, int x, int y);

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
    int x,y;
    cout << "\nHay nhap khoang (x,y): ";
    cin >> x;
    cin >> y;
    cout << "\nGia tri dau tien trong mang nam trong khoang (" << x << ","<< y << ") la: "<< dautientrongmang(a,n,x,y);
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


int dautientrongmang (float a[], int n, int x, int y){
    int dem = 0;
    int dautien;
    for ( int i =0; i<n; i++){
        if ( a[i] >= x && a[i]<= y){
            dem ++;
            break;
        }
    }
    for ( int i = 0; i<n; i++){
        if ( a[i] >= x && a[i]<= y){
            dautien = a[i];
            break;
        }
    }
    if ( dem == 0){
        return x;
    }
    return dautien;
}