#include <iostream>
using namespace std;
void Input_array(int *a, int n);
void Output_array(int *a, int n);
void sort_up_number(int *a, int n);
void swap(int &a, int &b);

int main()
{
    int n;
    do
    {
        cout << "\nEnter the number of elements of the array: ";
        cin >> n;
        if (n <= 0)
        {
            cout << "\nPlease enter n>0: ";
        }
    } while (n <= 0);
    int *a = new int[n];
    cout << "\n\n\t\tINPUT ARRAY \n";
    Input_array(a, n);
    cout << "\n\n\t\tOUTPUT ARRAY\n";
    Output_array(a, n);

    sort_up_number(a, n);
    cout << "\n\n\t\tSORTED NUMBER \n";
    Output_array(a, n);
    delete[] a;
    system("pause");
    return 0;
}

void Input_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nType a[" << i << "] = ";
        cin >> a[i];
    }
}
void Output_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sort_up_number(int *a, int n)
{
   for (int i = 0; i < n; i++)
   {
    for ( int j = i+1; j<n; j++)
    {
        if ( (a[i]%2 == 0) && (a[j]%2 == 0))
        {
            if ( a[i] > a[j])
            {
                swap(a[i], a[j]);
            }
        }
        else if ( (a[i]% 2==1)&& (a[j]%2 == 1))
        {
            if ( a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
   }
}
