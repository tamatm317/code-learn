/// cho phần tử x, tim vị trí của x trong arr
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,x;
    cin >> n >> x;
    int a[n];
    for(int i=0; i<n; ++i){
        cin >> a[i];
    }
    int l = 0, r = n-1;
    int pos ;
    while(l<=r){
        int mid = (l+r)/2;
        if (a[mid]==x){
            pos = mid;
            break;
        }
        if (a[mid]>x) r = mid -1;
        else l = mid+1;
    }
    cout << pos ;
}
int main(){
    solve();

}
