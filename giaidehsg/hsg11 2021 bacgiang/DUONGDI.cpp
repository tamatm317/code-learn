#include<iostream>
#include<cstdio>
using namespace std;
void solve(){
    int n;
    cin >> n ;
    int a[n][n];
    for(int i= 0; i<n; ++i){
        for(int j= 0;j<n; ++j){
            a[i][j] = 1;
        }
    }
    for(int i = n-2; i>=0; --i){
        for(int j= n-2; j>=0;--j){
            a[i][j] = a[i][j+1] + a[i+1][j];
        }
    }
//    for(int i= 0; i<n;++i){
//        for(int j= 0; j<n; ++j){
//            cout << a[i][j] << " ";
//        }
//        cout <<endl;
//    }
    cout << a[0][0];
}
int main(){
    freopen("DUONGDI.inp","r", stdin);
    freopen("DUONGDI.OUT","w", stdout);
    solve();
}
