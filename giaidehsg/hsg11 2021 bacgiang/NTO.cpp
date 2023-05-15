#include<bits/stdc++.h>
using namespace std;
int a[50000];
int cnt(int n){
    int cntuoc = 0;
    for(int i=1; i<sqrt(n);++i){
        if(n%i==0){
            cntuoc +=2;
        }
    }
    return cntuoc;
}
void sieve(){
    for(int i=2; i<50000; ++i){
        a[i] = i;
    }
    for(int i= 2;i<=sqrt(50000);++i){
        for(int j =i*i; j<50000; j+=i){
            a[j] = i;
        }
    }
}
void phantich(int x){
    vector<int> vt;
    while(x!=1){
        int temp = a[x];
        while(x%temp == 0){
            vt.push_back(temp);
            x/=temp;
        }
    }
    sort(vt.begin(),vt.end());
    for(int i= 0; i<vt.size();++i){
        if(i==vt.size()-1){
            cout << vt[i];
        }
        else{
            cout << vt[i] << "*";
        }
    }
}
void solve(){
    sieve();
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        cout << cnt(x) << " ";
        phantich(x);
        cout << endl;
    }
}
int main(){
    freopen("NTO.INP","r",stdin);
    freopen("NTO.OUT","w",stdout);
    solve();
}
