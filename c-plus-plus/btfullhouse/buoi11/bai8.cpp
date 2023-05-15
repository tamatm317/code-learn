#include <iostream>
#include <string>
#include <deque>
using namespace std;
void solve()
{
    deque<int> dqe;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int x;
        if (s == "PUSHBACK")
        {
            cin >> x;
            dqe.push_back(x);
        }
        else if (s == "PUSHFRONT")
        {
            cin >> x;
            dqe.push_front(x);
        }
        else if (s == "PRINTFRONT")
        {
            if (!dqe.empty())
            {
                cout << dqe.front() << endl;
            }
            else
                cout << "NONE" << endl;
        }
        else if (s == "PRINTBACK")
        {
            if (!dqe.empty())
            {
                cout << dqe.back() << endl;
            }
            else
                cout << "NONE" << endl;
        }
        else if (s == "POPFRONT")
        {
            if (!dqe.empty())
            {
                dqe.pop_front();
            }
            else
            {
                continue;
            }
        }
        else if (s == "POPBACK")
        {
            if (!dqe.empty())
            {
                dqe.pop_back();
            }
            else
            {
                continue;
            }
        }
    }
}
int main()
{
    solve();
}