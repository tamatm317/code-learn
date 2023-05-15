#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>
// #include <map>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore(); 
    int test = 1;
    while (t--)
    {
        
        string n;
        getline(cin, n);
        vector<string> vt;
        // map<string, int> mp;
        stringstream ss(n);
        string tmp;
        while (ss >> tmp)
        {
            vt.push_back(tmp);
        }
        // for(auto i : vt){
        //     cout << i << " ";
        // }
        cout << "#Test " << test << ": ";
        int res = 0;
        for (int i = 1; i < vt.size(); ++i)
        {
            int ok = 0;
            for (int j = 0; j < i; ++j)
            {
                if (vt[i] == vt[j])
                {
                    ok = 1;
                    break;
                }
            }
            if (ok == 1)
            {
                res = 1;
                cout << vt[i] << endl;
                break;
            }
        }
        if (res == 0)
            cout << -1 << endl;
        ++test;
    }
}