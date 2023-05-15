#include <iostream>
#include <cmath>

using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
void lonnhat5k (int a[], int n);

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
    cout << "\nGia tri lon nhat trong mang co dang 5^k : ";
    lonnhat5k(a,n);
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

bool kiemtra5k(int n){
    int x =n;
    int dv;
    while ( x>= 5){
        dv = x%10;
        if ( dv % 5 == 0){
            x = x/10;
        }
        else {
            break;
        }
    }
    
}

void lonnhat5k (int a[], int n){
    
    if ( dem != 0){
        cout << max << " ";
    }
    else
    {
       cout << " 0 ";
    }
}