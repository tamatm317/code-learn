#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}
int main()
{
    string n;
    getline(cin, n);
    stringstream ss(n);
    vector<string> vt;
    string word;
    while (ss >> word)
    {
        vt.push_back(word);
    }
    for (int i = 0; i < vt.size() - 1; ++i)
    {
        for (int j = i + 1; j < vt.size(); ++j)
        {
            if (vt[i].size() > vt[j].size())
            {
                swap(vt[i], vt[j]);
            }
            else if (vt[i].size() == vt[j].size())
            {
                if (vt[i] > vt[j])
                {
                    swap(vt[i], vt[j]);
                }
            }
        }
    }
    for (int i = 0; i < vt.size(); ++i)
    {
        cout << vt[i] << " ";
    }
}