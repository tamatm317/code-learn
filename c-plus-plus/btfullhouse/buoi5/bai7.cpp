#include<iostream>
using namespace std;
long long max(long long a, long long b){
    return a>b?a:b;
}
void input(int a[], int n){
    for(int i = 0; i<n; ++i) cin >> a[i];
}
void output(int a[], int n){
    int max1 = -1e9, max2= -1e9, min1 = 1e9, min2= 1e9;
    for(int i = 0; i<n;++i){
        if(a[i]>max1){
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i]>max2) max2 =a[i];
        if(a[i]<min1){
            min2 = min1;
            min1 = a[i];
        }
        else if(a[i]<min2) min2 = a[i];
    }
    long long res = max(1ll*max1*max2, 1ll*min1*min2);
    cout << res;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    input(a,n);
    output(a,n);
}