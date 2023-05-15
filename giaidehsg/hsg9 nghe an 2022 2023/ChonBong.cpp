#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    int check[n] = {0};
    for(int i= 0; i<n; ++i){
        cin >> a[n];
    }
    for(int i= 0; i<n-1; ++i){
        if(check[i]==0){
            for(int j= i+1; j<n; ++j){
                if(a[i]!=a[j] && check[j]==0){
                    check[i] = 1;
                    check[j] = 1;
                    cout << check[i] << " " << check[j] << " ";
                    break;

                }
                else{
                    continue;
                }
            }
        }
    }
    int cnt = 0;
    for(int i=0; i<n; ++i){
        cout << check[i] << " ";
        if(check[i] == 1) ++cnt;
    }
    cout << cnt;
}

int main(){
    freopen("ChonBong.INP","r",stdin);
    freopen("ChonBong.Out","w",stdout);
    solve();
}
