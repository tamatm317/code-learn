#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
void input(int a[], int n){
    for(int i = 0; i<n; ++i) cin >> a[i];
}
void output(int a[], int n){
    int count = 0;
    for(int i = 0; i<n;++i){
        fonr(int j = i+1; j<n;++j){
            if(gcd(a[i],a[j])==1)++count;
        }
    }
    cout << count;
}
// void output(int a[])
int main(){
    int n;
    cin >> n;
    int a[n];
    input(a,n);
    output(a,n);
}