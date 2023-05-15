// phi ham euler
#include<iostream>
#include<cstdio>
#include<cmath>
#define ll long long
using namespace std;
ll euler(ll n){
    ll res = n;
    for(ll i= 2; i<=n;i++){
        if(n%i==0){
            while(n%i==0){
                n/=i;
            }
            res-=res/i;
        }
    }
    if(n!=1){
        res -=res/n;
    }
    return res;
}
void solve(){
    ll n;
    cin >> n;
    cout << euler(n);
}
int main(){
    freopen("NTCN.INP","r",stdin);
    freopen("NTCN.OUT","w", stdout);
    solve();
}
