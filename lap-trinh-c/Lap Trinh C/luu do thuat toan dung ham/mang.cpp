#include <iostream>
#include <cmath>
#define MAX 100 // khai bao bien co 100 phan tu

using namespace std;

void Nhap_mang(int arr[],int n);
void Xuat_mang(int arr[],int n);
int Tinh_tong(int arr[], int n);

int main ()
{
	int arr[MAX];
	int n;
	do
	{
		cout << "\nNhap so luong phan tu cua mang: "; // Nhap so luong phan tu mang.
		cin >> n;
		if (n<=0 || n>MAX)
		{
			cout << "\nSo luong phan tu mang khong hop le, vui long nhap lai:  ";
		}
	}
	while (n <= 0 || n>MAX);
    cout << "\n\n\t\tNHAP MANG \n ";
    Nhap_mang(arr,n);
	cout << "\n\n\t\tXUAT MANG \n";
	Xuat_mang(arr,n);

	cout<< "\nTong tat ca cac phan tu cua mang la: "<< Tinh_tong(arr, n);
}
   

void Nhap_mang (int arr[], int n) 
{
	for(int i = 0; i<n; i++)
	{
		cout << "\nNhap gia tri phan tu arr[" << i << "]= ";
		cin >> arr[i];
	}
}

void Xuat_mang (int arr[], int n)
{
	for (int i =0; i<n; i++)
	{
		cout << i<< " ";
	}
}

int Tinh_tong (int arr[], int n)
{
	int tong = 0;
	for (int i=0; i<n; i++)
	{
       tong += arr[i];
	}
	return tong;
}