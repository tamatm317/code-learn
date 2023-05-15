// #include <iostream>
// using namespace std;
// #define Max 100

// void Nhap_mang(int *a, int b);
// void Xuat_mang ( int *a, int b);
// void tim_phan_tu_phan_biet(int *a, int *b, int n, int &m);
// void xu_ly( int *a, int *b, int n, int &m);

// int main()
// {
//     int n;
//     int m = 0;
//     int a [Max];
//     int b [Max];
//    do
//    {
//        cout << "\nHay nhap so luong phan tu mang: ";
//        cin >> n;
//        if ( n<=0 || n>Max)
//        {
//         cout << "\nVui long nhap lai n: ";
//        }
//    } while ( n<=0 || n>Max);
//     cout << "\n\n\t\tNHAP MANG\n";
//     Nhap_mang(a,n);
//     cout << "\n\n\t\tXUAT MANG\n";
//     Xuat_mang(a,n);

//     xu_ly(a,b,n,m);
//     system ("pause");
//     return 0;   
// }

// void Nhap_mang( int *a, int n)
// {
//     for (int i =0; i<n; i++)
//     {
//         cout << "\nNhap a[" << i << "] = ";
//         cin >> a[i];
//     }
// }

// void Xuat_mang( int *a, int n)
// {
//     for ( int i =0; i<n; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

// void tim_phan_tu_phan_biet( int *a, int *b, int n, int &m)
// {
//     m = 0;
//     b[m] = a[0];
//     m++;
//     for ( int i = 0; i<n; i++)
//     {
//         bool kt = true;
//         for ( int j = i-1; j>=0; j--)
//         {
//             if ( a[i] == a[j])
//             {
//                 kt = false;
//                 break;
//             }
//         }
//         if ( kt == true )
//         {
//             b[m] = a[i];
//             m++;
//         }
//     }
// }

// void xu_ly( int *a, int *b, int n, int &m)
// {
//     tim_phan_tu_phan_biet(a,b,n,m);
//     for (int i = 0; i<m; i++)
//     {
//         int dem = 0;
//         for (int j =0; j < n; j++)
//         {
//             if ( b[i] == a[j]) 
//             {
//                 dem ++ ;
//             }
//         }
//         cout << "\n" <<  a[i] << " xuat hien " << dem << " lan.";
//     }
// }

#include <iostream>
using namespace std;

void Nhap_mang(int *a, int b);
void Xuat_mang(int *a, int b);
void tim_phan_tu_phan_biet(int *a, int *b, int n, int &m);
void xu_ly(int *a, int *b, int n, int &m);

int main()
{
    int n;
    int m = 0;
    int *a = new int [n];
    int *b = new int [m];
    do
   {
        cout << "\nHay nhap so luong phan tu mang: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "\nVui long nhap lai n: ";
        }
    } while (n <= 0);
    cout << "\n\n\t\tNHAP MANG\n";
    Nhap_mang(a, n);
    cout << "\n\n\t\tXUAT MANG\n";
    Xuat_mang(a, n);

    xu_ly(a, b, n, m);
    delete []a;
    delete []b;
    system("pause");
    return 0;
}

void Nhap_mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap a[" << i << "] = ";
        cin >> a[i];
    }
}

void Xuat_mang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void tim_phan_tu_phan_biet(int *a, int *b, int n, int &m)
{
    int *temp = new int [n];
    for (int i =0; i<n; i++)
    {
        temp[i] = a[i];
    }
    for (int i =0; i<n; i++)
    {
        bool kt = true;
        for ( int j = i-1; j>= 0; j++)
        {
            if (temp[i] == temp [j])
            {
                kt = false;
                break;
            }
        }
        if ( kt == true)
        {
            for (int i = 0; i<n; i++)
            {
                int m = 0;
                int *b = new int [m+1];
                for ( int j = 0; j < n; j++)
                {
                    b[i] = temp[i];
                }
            }
        }
    }
}

void xu_ly(int *a, int *b, int n, int &m)
{
    tim_phan_tu_phan_biet(a, b, n, m);
    for (int i = 0; i < m; i++)
    {
        int dem=0;
        for (int j = 0; j < n; j++)
        {
            if (b[i] == a[j])
            {
                dem++;
            }
        }
        cout << "\n" << a[i] << " xuat hien " << dem << " lan.";
    }
}

