#include <iostream>
#include <sstream>
#include <cstring>
#include <vector>
#include <set>
using namespace std;
void solve()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    vector<string> v1;
    vector<string> v2;
    stringstream s1(a);
    stringstream s2(b);
    set<string> st;
    string word;
    while (s1 >> word)
    {
        v1.push_back(word);
    }
    while (s2 >> word)
    {
        v2.push_back(word);
    }
    for (int i = 0; i < v1.size(); ++i)
    {
        int check = 1;
        for (int j = 0; j < v2.size(); ++j)
        {
            if (v1[i] == v2[j])
            {
                check = 0;
                break;
            }
        }
        if (check == 1)
        {
            st.insert(v1[i]);
        }
    }
    for (auto x : st)
    {
        cout << x << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        solve();
        cout << endl;
    }
}