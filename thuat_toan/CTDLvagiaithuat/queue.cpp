#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> qe;
    int n;
    int x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        qe.push(x);
    }
    while (!qe.empty())
    {
        cout << qe.front();
        qe.pop();
    }
}