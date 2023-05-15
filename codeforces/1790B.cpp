#include <iostream>
// #include<vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int res = s - r;
        cout << res << " ";
        n--;
        while (r != 0)
        {
            int temp = r % n;
            int temp2 = r / n;
            if (temp == 0)
            {
                for (int i = 0; i < n; ++i)
                {
                    cout << r / n << " ";
                }
                r = 0;
            }
            else
            {
                cout << temp2 << " ";
                r -= temp2;
                n--;
            }
        }
        cout << endl;
    }
}