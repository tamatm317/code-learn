#include <iostream>
using namespace std;
void Input_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap phan tu mang a[" << i << "] = ";
        cin >> a[i];
    }
}
void output_array(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void xoa(int a[], int &n, int pos)
{
    for (int i = pos+1; i<n; i++)
    {
        a[i-1] = a[i];
       
    }
     n--;
}

void delete_duplicate_element(int a[], int &n)
{
    for ( int i = 0; i<n; i++)
    {
        for ( int j = i+1; j<n; j++)
        {
            if ( a[i] == a[j])
            {
                xoa(a,n,j);
                j--;
            }
        }
    }
}


int main()
{
    int n;
    do
    {
        cout << "\nENTER THE NUMBER OF THE ELEMENTS OF THE SHORTED ARRAY A:";
        cin >> n;
        if (n <= 0)
        {
            cout << "\nPlease Enter n>0: ";
        }
    } while (n <= 0);
    int a [n];
    cout << "\n\n\t\tINPUT ARRAY \n";
    Input_array(a,n);
    cout << "\n\n\t\tOUTPUT ARRAY\n";
    output_array(a,n);

    delete_duplicate_element (a,n);
    cout << "\n\n\t\tARRAY AFTER DELETE DUPLICATE ELEMENTS\n";
    output_array(a,n);
    system("pause");
    return 0;
}