// #include <iostream> 
// using namespace std;

// void Input_array_a( int a[], int n)
// {
//     for ( int i =0; i<n; i++)
//     {
//         cout << "\nEnter a["<< i << "] = ";
//         cin >> a[i];
//     }
// }
// void Input_array_b(int b[], int m)
// {
//     for (int i = 0; i < m; i++)
//     {
//         cout << "\nEnter b[" << i << "] = ";
//         cin >> b[i];
//     }
// }
// void swap ( int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// void combine_a_b( int a[], int b[], int n, int m){
    
//     int *c= new int [n+m];
//     for ( int i=0; i<n; i++)
//     {
//         for (int j=0; j<m; j++)
//         {
//             if (a[i]> b[j])
//             {
//                 swap(a[i], a[j]);
//             }
//         }
//     }
//     delete []c;
// }
// void Output_combine(int a[], int b[], int n, int m)
// {
//     combine_a_b(a,b,n,m);
//     int x = n+m;
//     for ( int i = 0; i<x; i++)
//     {
//         cout << a[i] << " ";
//     }
// }
// int main()
// {
//     int n, m;
//     do
//     {
//         cout << "\nENTER THE NUMBER OF THE ELEMENTS OF THE SHORTED ARRAY A:";
//         cin >> n;
//         if ( n <= 0)
//         {
//             cout << "\nPlease Enter n>0: ";
//         }
//     } while (n<= 0);
//     do
//     {
//         cout << "\nENTER THE NUMBER OF THE ELEMENTS OF THE SHORTED ARRAY B:";
//         cin >> m;
//         if (m <= 0)
//         {
//             cout << "\nPlease Enter m>0: ";
//         }
//     } while ( m<= 0);
//     int a[] = new int [n];
//     int b[] = new int [m];
//     cout << "\n\n\t\tINPUT ARRAY A\n";
//     Input_array_a(a,n);
//     cout << "\n\n\t\tINPUT ARRAY B\n";
//     Input_array_b(a,n);
//     cout << "\n\n\t\tARRAY AFTER COMBINE\n";
//     Output_combine(a,b,m,n);
//     delete []a;
//     delete []b;
//     system("pause");
//     return 0;
// }

#include <iostream>
using namespace std;

void Input_array_a( int a[], int n)
{
    for ( int i =0; i<n; i++)
    {
        cout << "\nEnter a["<< i << "] = ";
        cin >> a[i];
    }
}
void Input_array_b(int b[], int m)
{
    for (int i = 0; i < m; i++)
    {
        cout << "\nEnter b[" << i << "] = ";
        cin >> b[i];
    }
}
void swap ( int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void combine_a_b(int a[], int b[], int c[], int n, int m, int x){

    for ( int i = 0; i<n; i++)
    {
        c[i] = a[i];
    }
    for ( int j =n; j<x; j++)
    {
        int i = 0;
        c[j] = b[i];
        i++;
    }
    for ( int i = 0; i<x; i++)
    {
        for ( int j = i+1; j<x; j++)
        {
           if ( c[i] > c[j])
           {
               swap(c[i], c[j]);
           }
        }
    }
    
}
void Output_combine(int c[], int x)
{
    for ( int i = 0; i<x; i++)
    {
        cout << c[i] << " ";
    }
}

int main()
{
    int n, m;
    do
    {
        cout << "\nENTER THE NUMBER OF THE ELEMENTS OF THE SHORTED ARRAY A:";
        cin >> n;
        if (n <= 0)
        {
            cout << "\nPlease Enter n>0: ";
        }
    } while (n <= 0);
    do
    {
        cout << "\nENTER THE NUMBER OF THE ELEMENTS OF THE SHORTED ARRAY B:";
        cin >> m;
        if (m <= 0)
        {
            cout << "\nPlease Enter m>0: ";
        }
    } while (m <= 0);
    int x = n + m;
    int  a [n];
    int  b[m];
    int  c[x];
    cout << "\n\n\t\tINPUT ARRAY A\n";
    Input_array_a(a, n);
    cout << "\n\n\t\tINPUT ARRAY B\n";
    Input_array_b(b, m);
    combine_a_b(a, b,c, m, n,x);
    cout << "\n\n\t\tARRAY AFTER COMBINE\n";
    Output_combine(c,x);
    system("pause");
    return 0;
}
