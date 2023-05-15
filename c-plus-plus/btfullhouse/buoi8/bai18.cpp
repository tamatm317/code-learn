#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt = 1;
    while (t--)
    {
        cin.ignore(1); 
        string a;
        string b;
        vector<string> vt;
        vector<string> vttmp;
        getline(cin, a);
        // cin.ignore(1);
        cin >> b;
        string temp = a;
        for(int i= 0; i<temp.size();++i){
            temp[i] = tolower(temp[i]);
        }
        stringstream ss(a);
        stringstream sst(temp);
        string word;
        while (ss >> word)
        {
            vt.push_back(word);
        }
        while(sst >> word){
            vttmp.push_back(word);
        }
        // vector::iterator p = vt.erase(b);
        for (auto i = 0; i < vt.size(); ++i)
        {
            if (vttmp[i] == b)
            {
                vt.erase(vt.begin() + i);
                vttmp.erase(vttmp.begin() + i);
                 i--;
            }
        }
        cout << "#Test " << cnt << ": " ;
        ++cnt;
        for (auto i : vt)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}