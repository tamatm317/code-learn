#include <queue>
#include <iostream>
#include <cstdio>
using namespace std;
void sizequeue(queue<int> &qe)
{
    cout << qe.size() << endl;
}
int isempty(queue<int> &qe)
{
    if (!qe.empty())
        return 1;
    else
        return 0;
}
void pushqueue(queue<int> &qe)
{
    int x;
    cin >> x;
    qe.push(x);
}
int popqe(queue<int> &qe)
{
    if (!qe.empty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void frontqe(queue<int> &qe)
{
    if (!qe.empty())
    {
        cout << qe.front() << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
void backqe(queue<int> &qe)
{
    if (!qe.empty())
    {
        cout << qe.back() << endl;
        ;
    }
    else
    {
        cout << -1 << endl;
    }
}
void solve()
{
    int truyvan;
    cin >> truyvan;
    queue<int> qe;
    while (truyvan--)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            sizequeue(qe);
        }
        else if (type == 2)
        {
            if (isempty(qe))
            {
                cout << "NO" << endl;
            }
            else
                cout << "YES" << endl;
        }
        else if (type == 3)
        {
            pushqueue(qe);
        }
        else if (type == 4)
        {
            if (popqe(qe))
            {
                qe.pop();
            }
            else
            {
                continue;
            }
        }
        else if (type == 5)
        {
            frontqe(qe);
        }
        else if (type == 6)
        {
            backqe(qe);
        }
    }
}
int main()
{
    // freopen("INPUT.INP", "r", stdin);
    // freopen("OUTPUT.OUT", "w", stdout);
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
}