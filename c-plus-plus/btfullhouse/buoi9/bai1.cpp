#include <iostream>
using namespace std;
void input(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
}
int check(int a[], int n)
{
    for (int i = 0; i < n; ++i)
    {
        if (a[i] > a[i + 1])
            return 0;
    }
    return 1;
}
void sort(int a[], int n){
    int c = 1;
    for(int i= 0; i<n-1; ++i){
        for(int j= i+1; j<n; ++j){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        if (check(a, n) == 0)
        {
            cout << "Buoc " << c << ": ";
            for (int k = 0; k < n; ++k)
            {
                cout << a[k] << " ";
            }
            cout << endl;
            ++c;
        }
        else
        {
            cout << "Buoc " << c << ": ";
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
    input(a, n);
    sort(a, n);
}