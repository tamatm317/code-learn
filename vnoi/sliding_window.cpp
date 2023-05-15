#include <bits/stdc++.h>
using namespace std;
// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n];
//     for (int i = 0; i < n; ++i)
//         cin >> a[i];
//     int max = 0;
//     for (int i = 0; i < k; ++i)
//         max += a[i];
//     int sum = max;
//     for (int i = k; i < n; ++i)
//     {
//         sum = sum - a[i - k] + a[i];
//         if (sum > max)
//             max = sum;
//     }
//     // cout << sum;
//     cout << max;
// }
// sol

// so lan doi cho cac phan tu nho hon k it nhat
// ý tướng: đếm xem có bao nhiêu phần tử bé hơn k gọi là d;
// dùng sliding window, trên mỗi window, đếm xem có bao nhiêu số bé hơn k
// tìm ra cửa sổ có nhiều số bé hơn k nhất gọi là max
// số lần đổi chỗ = d - max
// void solve()
// {
//     int n, k;
//     cin >> n >> k;
//     int a[n], d = 0;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> a[i];
//         if (a[i] <= k)
//             ++d;
//     }
//     int cnt = 0;
//     for (int i = 0; i < d; ++i)
//     {
//         if (a[i] <= k)
//             ++cnt;
//     }
//     int maxx = cnt;
//     // đếm các số bé hơn k trên mỗi cửa sổ
//     for (int i = d; i < n; ++i)
//     {
//         if (a[i - d] <= k)
//             --cnt;
//         if (a[i] <= k)
//             ++cnt;
//         maxx = max(maxx, cnt);
//     }
//     cout << d - maxx;
// }
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
    {
        a[i] = 1;
    }
    int num;
    cin >> num;
    for (int i = 1; i <= num; ++i)
    {
        int x;
        cin >> x;
        a[x - 1] = 0;
    }
    int maxx = 0;
    for (int i = 0; i < k; ++i)
    {
        if (a[i] == 1)
            ++maxx;
    }
    int res = maxx;
    for (int i = k; i < n; ++i)
    {
        if (a[i] == 1)
            ++res;
        if (a[i - k] == 1)
            --res;
        maxx = max(maxx, res);
    }
    cout << k - maxx;
}
int main()
{
    solve();
}