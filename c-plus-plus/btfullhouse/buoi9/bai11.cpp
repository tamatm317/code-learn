#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void input(vector<int> &a, int n)
{
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
}
int progress(vector<int> a, vector<int> b, int male, int female)
{
    int i = 0, j = 0, cnt = 0;
    while (i < male && j < female)
    {
        if (a[i] > b[j])
        {
            ++cnt;
            ++i;
            ++j;
        }
        else
        {
            ++i;
        }
    }
    return cnt;
}
int main()
{
    vector<int> male;
    vector<int> female;
    int num_male, num_female;
    cin >> num_male >> num_female;
    input(male, num_male);
    input(female, num_female);
    sort(female.begin(), female.end());
    sort(male.begin(), male.end());
    cout << progress(male, female, num_male, num_female) << endl;
}