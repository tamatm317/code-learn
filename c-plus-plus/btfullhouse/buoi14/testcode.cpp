#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        stringstream ss;
        string s = "NV";
        ss << std::setw(4) << setfill('0') << i;
        s += ss.str();
        cout << s << endl;
    }
}