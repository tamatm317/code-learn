#include <iostream>
#include <cstring>
using namespace std;
int val[] = {1, 5, 10, 50, 100, 500, 1000};
char c[] = "IVXLCDM";
int findpos(char s)
{
    for (int i = 0; i < 7; ++i)
    {
        if (c[i] == s)
        {
            return i;
        }
    }
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int res = val[findpos(s[n - 1])];
    for (int i = n - 1; i >= 0; --i)
    {
        int temp1 = findpos(s[i]);
        int temp2 = findpos(s[i - 1]);
        if (val[temp1] <= val[temp2])
        {
            res += val[temp2];
        }
        else
        {
            res -= val[temp2];
        }
    }
    cout << res;
}
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        solve();
        cout << endl;
    }
}