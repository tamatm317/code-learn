#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        cin >> a[i];
    }
    unordered_map<int, int> mp;
    for (int i = 0; i < 10; ++i)
    {
        cout << mp.count(a[i]);
    }
}