#include<iostream>
using namespace std;
void input(int a[], int n){
    for(int i = 0; i<n; ++i) cin >> a[i];
}
void output(int a[], int n){
    int count = 0;
    for(int i = 0; i<n-1;++i){
        if(a[i]==a[i+1])++count;
    }
    cout << count << endl;;
}
// void output(int a[])
int main(){
    int test = 0;
    cin >> test;
    for(int i = 1; i<=test;++i){
        int n;
        cin >> n;
        int a[n];
        input(a,n);
        output(a,n);
    }
}