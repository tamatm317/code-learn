#include <iostream>
#include <cmath>
using namespace std;


void Nhap_mang(int a[], int n);
void Xuat_mang(int a[], int n);
void chanlonnhat (int a[], int n);

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
    cout << "\nSo chan lon nhat nho hon moi gia tri le co trong mang : ";
    chanlonnhat(a,n);
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

void chanlonnhat (int a[], int n){
    int max = 0;
    int min ;
    for ( int i =0; i<n; i++){
        if ( a[i]%2 == 0 && a[i]>max){
            max = a[i];
        }
        else if ( a[i]%2 == 1 && a[i]<min){
            min = a[i];
        }
    }
    if (max<min){
        cout << max;
    }
   else{
    cout << "Khong co gia tri nao thoa man.";
   }
}