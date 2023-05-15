#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout <<"CHUONG TRINH GIAI PHUONG TRINH BAC NHAT";
    cout <<"\nHay nhap so a: ";
    cin >> a;
    cout <<"\nHay nhap so b: ";
    cin >> b;
    if (a == 0)
    {
        if (b==0)
        {
            cout << "Phuong trinh co vo so nghiem";
        }
        else 
        {
            cout << "Phuong trinh vo nghiem";
        }

    }
    else 
    {
        cout << "Nghiem cua phuong trinh la x: " << -b/a ;
    }
    system("pause");
    return 0;
}