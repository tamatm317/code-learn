#include<bits/stdc++.h>
using namespace std;
int check(int a[], int left, int right){
    int cnt = 0;
    for(int i=left; i<=right; ++i){
        if(a[i]==0){
            ++cnt;
        }
        else{
            --cnt;
        }
    }
    return cnt == 0;
}
void solve(){
    int n;
    cin >> n;
    int cnt = 0;
    int a[n];
    for(int i= 0; i<n; ++i){
        cin >> a[i];
    }
    int left = 0, right = 1;
    while(left<n){
        while(right<n){
            if(check(a,left,right)){
                ++cnt;
            }
            right+=2;
        }
        ++left;
        right = left + 1;
    }
    cout << cnt;
}
int main(){
    freopen("TINHIEU.INP", "r", stdin);
    freopen("TINHIEU.OUT", "w", stdout);
    solve();
}
