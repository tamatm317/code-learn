#include <iostream>
#include <vector>
using namespace std;

void progress(int n)
{
    vector<int> value;
    int alice, bob, total;

    int temp = 1;
    while (total < n)
    {
        value.push_back(temp);
        total += temp;
        temp += 1;
    }
    for (int i = 0; i < value.size(); i++)
    {
        cout << value[i] << " ";
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        progress(n);
    }
    return 0;
}