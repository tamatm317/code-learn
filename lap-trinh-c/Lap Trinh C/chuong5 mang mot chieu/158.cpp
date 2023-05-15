#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(float a[], int n);
void Xuat_mang(float a[], int n);
void timx (float a[], int n);

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
    timx(a,n);
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


void timx (float a[], int n){
    float max = a[0];
    float min = a[0];
   for (int i = 1; i< n; i++){
       if ( a[i]< min){
        min = a[i];
    }
   if ( a[i]> max){
        max = a[i];
    }
}
    float x ;
   if ( abs(min)> max){
     x = min;
   }
   else if(abs(min)<max) {
    x = max;
   }
    cout << "\nGia tri cua x sao cho doan [-x,x] chua tat ca cac gia tri trong mang la: "<< abs(x);
}
