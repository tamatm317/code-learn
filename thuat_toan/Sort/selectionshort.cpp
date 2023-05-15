#include<iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i= 0; i<n-1; i++){
        int min = i;
        for(int j = i+1; j<n;++j){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        int t = arr[i];
        arr[i] = arr[min];
        arr[min] = t;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i= 0; i<n; i++){
        cin>>arr[i];
    }
    selection_sort(arr, n);
    for(int i= 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}