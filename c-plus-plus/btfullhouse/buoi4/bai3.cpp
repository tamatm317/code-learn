#include<iostream>
using namespace std;
long long binpow(long long a, long b){
    if(b==0) return 1;
    if(b==1) return a;
    long long res = binpow(a,b/2);
    if(b%2==0)
        return (res*res) %1000000007;
    if(b%2==1)
        res = (res*res)%1000000007;
        return (res*a)%1000000007;
}
int main(){
    long long a,b;
    cin >> a >> b;
    cout << binpow(a,b);
}