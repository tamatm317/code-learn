#include <iostream>
#include <string>
using namespace std;
void solve()
{
    string a;
    cin >> a;
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += int(a[i]) - 48;
    }
    cout << sum << endl;
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
}