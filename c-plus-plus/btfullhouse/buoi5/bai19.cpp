#include<iostream>
using namespace std;
int min(int a, int b){
    return a<b?a:b;
}
void input(int a[], int n){
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
}
void output(int a[], int b[], int n, int m){
    int intersect[min(n,m)], union_[n+m]; // giao//hop
    int i = 0, j = 0, x=0, y = 0; // x: intersect, y:union
    while (i<n&&j<m){
        if(a[i]==b[j]){
            intersect[x] = a[i];
            union_[y] = a[i];
            ++i; ++j; ++x; ++y;
        }
        else if(a[i]>b[j]){
            union_[y++] = b[j++];
        }
        else{
            union_[y++] = a[i++];
        }
    }
    while(i<n){
        union_[y++] = a[i++];
    }
    while(j<m){
        union_[y++] = b[j++];
    }
    for(int i = 0;i<y;++i){
        cout << union_[i] << " ";
    }
    cout << endl;
    for(int i = 0 ;i<x;++i){
        cout << intersect[i] << " ";
    }
}
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    input(a,n);
    input(b,m);
    output(a,b,n,m);
    return 0;
}