#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <sstream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int num;
        cin >> num;
        string n;
        getline(cin, n);
        vector<string> vt;
        set<string> st;
        stringstream ss(n);
        string word;
        int i = 0;
        while (ss >> word)
        {
            vt.push_back(word);
            st.insert(vt[i++]);
        }
        for (auto i : st)
        {
            cout << i;
        }
        cout << endl;
        // cout << st[1] << " ";
    }
}