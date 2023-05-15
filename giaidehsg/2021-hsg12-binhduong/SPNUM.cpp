#include<bits/stdc++.h>
using namespace std;
int check[10000];
void sieve(){
    check[0] = check[1] = 0;
    for(int i=2; i<10000;++i){
        check[i] = 1;
    }
    for(int i=2; i<sqrt(10000); ++i){
        for(int j =i*i; j<10000; j+=i){
            check[j] = 0;
        }
    }
}
void kt(int a){
    string s = to_string(a);
    int sum = 0;
    for(int i=0; i<s.size();++i){
        sum += stoi(s[i]);
    }
    int temp = a;
    while(temp>)
}
void solve(){
    sieve();
    int n;
    cin >> n;
    for(int i = n; i<10000000000; ++i){
        if(check(i)){
            cout << i;
            break;
        }
    }

}
int main(){
    freopen("SPNUM.INP","r",stdin);
    freopen("SPNUM.OUT","w",stdout);
    solve();
}
