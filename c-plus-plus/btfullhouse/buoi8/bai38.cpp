#include <iostream>
#include <cstring>
#include <set>
#include <vector>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    cin.ignore();
    vector<string> a;
    set<string> st;
    for (int i = 0; i < n; ++i)
    {
        string s;
        getline(cin, s);
        // cin.ignore();
        st.insert(s);
    }
    // for (auto x : st)
    // {
    //     cout << x << endl;
    // }
    cout << st.size();
}
int main()
{
    solve();
}