#include <iostream>
#include <set>
#include <cstring>
using namespace std;
int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.size() - 1; ++i)
    {
        for (int j = i + 1; j < s.size(); ++j)
        {
            if (s[i] > s[j])
            {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    for (int i = 0; i < s.size(); ++i)
    {
        cout << s[i];
    }
}