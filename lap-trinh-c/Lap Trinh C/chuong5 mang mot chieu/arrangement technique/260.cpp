#include <iostream>
using namespace std;

void print_array(int *a, int n);
void output_array (int *a, int n);
void swap(int a, int &b);

int main()
{
    int n;
    do
    {
        cout << "\nEnter the number of elements of the array: ";
        cin >> n;
        if (n<=0)
        {
            cout << "\nPlease enter n>0: ";
        }
    }
    while (n<=0);
    int *a = new int [n];
    cout << "\n\n\t\tPRINT ARRAY\n";
    print_array(a,n);
    cout << "\n\n\t\tOUTPUT ARRAY\n";
    output_array(a,n);

    delete []a;
    system("pause");
    return 0;
}

void print_array ( int *a, int n)
{
    for (int i =0; i<n; i++)
    {
        cout << "\nType a["<< i << "] = ";
        cin >> a[i];
    }
}
void output_array(int *a, int n){
    for ( int i=0; i<n; i++)
    {
        cout << a[i]  << " ";
    }
}

void swap (int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}