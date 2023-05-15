#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    sort(a, a+n);
//    for(int i= 0; i<n; ++i){
//        cout << a[i] << " ";
//    }
    int cnt = 0;
    int i=0;
    while(i<n){
        ++cnt;
        i+=a[i];
    }
    cout << cnt;
}
int main(){
    freopen("CLB.INP", "r", stdin);
    freopen("CLB.out", "w", stdout);
    solve();
}
