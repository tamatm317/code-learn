#include <iostream>
#include <cstring>
#include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char x[100000];
        cin >> x;
        map<char, int> mp;
        for (int i = 0; i < strlen(x); i++)
        {
            mp[x[i]]++;
        }
        for (int i = 0; i < strlen(x); ++i)
        {
            if (mp[x[i]] == 1)
            {
                cout << x[i];
            }
        }
        cout << endl;
    }
}