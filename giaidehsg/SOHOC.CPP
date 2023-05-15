#include <iostream>
#include <cmath>
#include <cstdio>
#define ll long long
using namespace std;
// int prime(int n){
//     for(int i= 2; i<=sqrt(n);++i){
//         if(n%i==0) return 0;
//     }
//     return 1;
// }
int a[1000000];
void sive()
{
    for (int i = 0; i < 1000000; ++i)
    {
        a[i] = 1;
    }
    a[0] = a[1] = 0;
    for (int i = 2; i < 1000; ++i)
    {
        if (a[i])
        {
            for (int j = i * i; j < 1000000; j += i)
            {
                a[j] = 0;
            }
        }
    }
}
void solve()
{
    sive();
    ll n;
    cin >> n;
    ll temp = sqrt(n);
    ll val;
    for (int i = 0; i < 1000000; ++i)
    {
        if (i > temp && a[i] == 1)
        {
            val = i;
            break;
        }
    }
    cout << 1ll * val * val;
}
int main()
{
    freopen("SOHOC.INP", "r", stdin);
    freopen("SOHOC.OUT", "w", stdout);
    solve();
}