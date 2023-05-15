#include <bits/stdc++.h>
using namespace std;
const long long x = pow(10, 18);
bool prime[x];
std::vector<long long> store;
void sieve()
{
    std::memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;
    for (long long i = 2; i < 1e9; ++i)
    {
        if (prime[i])
            for (long long j = i * i; j < x; j += i)
            {
                prime[i] = false;
            }
    }
}
void store_prime()
{
    sieve();
    for (long long i = 2; i < x; ++i)
    {
        if (prime[i])
        {
            store.push_back(i);
        }
    }
}
void find_nth()
{
    int val = store.size();
    int n;
    cin >> n;
    int l = 0, r = val - 1;
    cout << store[n - 1];
}
int main()
{
    int test;
    cin >> test;
    for (int i = 1; i <= test; ++i)
    {
        find_nth();
        cout << endl;
    }
}