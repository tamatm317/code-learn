#include <iostream>
using namespace std;
void Input_array(int *a, int n);
void Output_array(int *a, int n);
bool primenumber(int n);
void sortup_primenumber(int *a, int n);
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

    sortup_primenumber(a, n);
    cout << "\n\n\t\tSORTED PRIME NUMBER \n";
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

bool primenumber(int n)
{
    if (n < 2)
    {
        return false;
    }
    else
    {
        if (n >= 2)
        {
            for (int j = 2; j < n; j++)
            {
                if (n % j == 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void sortup_primenumber(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (primenumber(a[i]) == true && primenumber(a[j]) == true)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                }
            }
        }
    }
}
