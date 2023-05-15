#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,n,m;
        cin >> a>> b >> n >> m;
        long long temp = a*(n/(m+1))*m;
        temp += min(n%(m+1)*a, n%(m+1)*b);
        cout << min(temp,b*n) << endl ;
    }
}