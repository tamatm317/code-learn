#include <iostream>
using namespace std;

void Input_array(int *a, int n);
void output_array(int *a, int n);
void average ( int *a, int n);
bool first_odd(int n);


int main(){
    int n;
    do
    {
        cout << "\nEnter the number of elements of the array: ";
        cin >> n;
        if ( n<= 0)
        {
            cout << "\nPlease enter n>=0: ";
        }
    } while (n<=0);
    int *a = new int [n];
    cout << "\n\n\t\tINPUT ARRAY\n";
    Input_array(a,n);
    cout << "\n\n\t\tOUTPUT array\n";
    output_array(a,n);
    cout << "\n\n\t\tAVERAGE OF THE FIRST ODD NUMBER: ";
    average(a,n);
    delete []a;
    system("pause");
    return 0;
}
void Input_array(int *a, int n)
{
    for (int i = 0; i<n; i++)
    {
        cout << "\nEnter a[" << i << "] = ";
        cin >> a[i];
    }
}

void output_array(int *a, int n)
{
    for ( int i =0; i<n; i++)
    {
        cout << a[i] << " ";
    }
}

bool first_odd(int n){
    int x = n;
    while ( x>=10)
    {
        x/=10;
    }
    if ( x % 2 != 0)
    {
        return true;
    }
    return false;
}
 void average(int *a, int n)
 {
    int tong = 0;
    int dem = 0;
    float tb;
    for (int i = 0; i<n; i++)
    {
        if (first_odd(a[i]) == true){
            tong += a[i];
            dem ++;
        }
    }
    tb = float(tong) / dem;
    cout << tb << " ";
 }