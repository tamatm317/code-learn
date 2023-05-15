#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
int a[1000000];
void sive(){
    a[0] = a[1] = 0;
    for(int i= 2; i<1000000; ++i){
        a[i] = 1;
    }
    for(int i= 2; i<1000; ++i){
        if(a[i]){
            for(int j= i*i; j<100000; j+=i){
                a[j] = 0;
            }
        }
    }
}
void solve(){
    sive();
    ll n;
    cin >> n;
    int temp = sqrt(n);
    int res;
    for(int i= 2; i<1000000; ++i){
        if(i> temp && a[i] == 1){
            res = i;
            break;
        }
    }
    //cout << temp;
    cout << res* res;
}
int main(){
    freopen("SOHOC.INP", "r", stdin);
    freopen("SOHOC.OUT", "w", stdout);
    solve();
    //return 0;
}
