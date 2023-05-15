#include <iostream>
#include <string>
using namespace std;
void solve()
{
    string a;
    while (cin >> a)
    {
        if (a[0] == a[a.size() - 1])
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}
int main()
{
    solve();
}