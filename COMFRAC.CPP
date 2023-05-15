#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    for(int j=1;j<=n; ++j){
        int a[6];
        double x1, x2;
        for(int i=0; i<6;++i){
            cin >> a[i];
        }
        x1 = double(a[0]*a[1])/a[2];
        x2 = double(a[3]*a[4])/a[5];
//        cout << x1 << " " << x2;
        if(x1==x2) cout << '=';

        else if(x1>x2) cout << ">";
        else cout << "<";
        cout << endl;
    }
}
int main(){
    freopen("COMFRAC.INP","r",stdin);
    freopen("COMFRAC.txt","w",stdout);
    solve();
}
