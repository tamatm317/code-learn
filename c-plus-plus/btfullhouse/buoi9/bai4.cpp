#include <iostream>
using namespace std;
int check(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > a[i + 1])
        {
            return 0;
            break;
        }
    }
    return 1;
}
void bubble(int a[], int n)
{
    int step = 1;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
        if (check(a, n) == 0)
        {
            cout << "Buoc " << step << ": ";
            for (int k = 0; k < n; ++k)
            {
                cout << a[k] << " ";
            }
            cout << endl;
            step++;
            // break;
        }
        else
        {
            cout << "Buoc " << step << ": ";
            for (int k = 0; k < n; ++k)
            {
                cout << a[k] << " ";
            }
            break;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    bubble(a, n);
}