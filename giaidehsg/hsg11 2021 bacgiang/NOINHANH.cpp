#include<iostream>
#include<cstdio>
using namespace std;
void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n;++i){
        cin >> a[i];
    }
    int temp = a[0];
    cout << temp << " ";
    for(int i= 1; i<n; ++i){
        temp += a[i];
        cout << temp << " ";
    }

}
int main(){
    freopen("NOINHANH.INP","r",stdin);
    freopen("NOINHANH.OUT","w", stdout);
    solve();
}
