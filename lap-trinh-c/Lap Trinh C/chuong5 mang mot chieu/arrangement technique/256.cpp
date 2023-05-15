#include <iostream>
using namespace std;
 void Input_array( int *a, int n);
 void print_array( int *a, int n);
 void sort_up_descending(int *a, int n);
 void swap( int *a, int n);

int main(){
    int n;
    do
    {
        cout << "\nEnter the number of the elements of tha array: ";
        cin >> n;
        if (n<=0)
        {
            cout << "\nPlease enter n > 0: ";
            system("pause");
        }
    }
    while  (n<=0);
    int *a = new int [n];
    cout << "\n\n\t\tINPUT ARRAY ";
    Input_array(a,n);
    cout << "\n\n\t\tPRINT ARRAY ";
    print_array(a,n); 

    sort_up_descending(a,n);
    cout << "\n\n\t\tSORTED ARRAY ";
    print_array(a,n);
    delete []a;
    system("pause");
    return 0;
}

void Input_array( int *a, int n)
{
    for ( int i =0; i<n; i++){
        cout << "\nType a[" << i << "] = ";
        cin >> a[i];
    }
}
void print_array( int *a, int n){
    for (int i =0; i<n; i++)
    { 
        cout << a[i] << " ";
    }
    
} 

void swap( int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void sort_up_descending( int *a, int n){
    for (int i =0; i<n-1; i++){
        for ( int j = i+1; j<n; j++){
            if (a[i]<a[j]){
                swap(a[i],a[j]);
            }
        }
    }
}