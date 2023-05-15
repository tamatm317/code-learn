#include<bits/stdc++.h>
int mark[3000000];
using namespace std;
void solve(){
    int n,m;
    cin >> n >> m;
    int x;
    int a[n];
    int b[m];
    for(int i= 0; i<n; ++i){
        cin >> a[i];
        mark[a[i]]++;
    }
    for(int i= 0; i<m; ++i){
        cin >> b[i];
    }
    for(int i= 0; i<m; ++i){
        if(mark[b[i]]!=0){
            mark[b[i]] = 0;
        }
    }
    int max1 = 0;
    for(int i= 0; i<n; ++i){
        if(mark[a[i]]!=0){
            cout << a[i] << " ";
            max1 = max(max1, a[i]*mark[a[i]]);
        }
    }
    cout << endl << max1;

}
int main(){
    freopen("THUONG.INP", "r", stdin);
    freopen("THUONG.OUT", "w", stdout);
    solve();
}
