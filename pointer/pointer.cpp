#include <iostream>
#include <cstdio>
using namespace std;
void inc(int *p)
{
    (*p)++;
}
int main()
{
    // freopen("input.inp", "r", stdin);
    // freopen("output.out", "w", stdout);
    // int n;
    // cin >> n;
    // cout << (int)&n << endl;
    // int ad;
    // cin >> ad;
    // int *p = reinterpret_cast<int *>(ad);
    // *p = 10;
    // cout << n;
    // int *p1 = &n;
    // cout << *(&p1) << endl;
    // cout << &p1 << endl;
    // cout << *p1 << endl;
    // int *p1 = &n;
    // char *p2 = (char *)&n;
    // double *p3 = (double *)&n;
    // cout << &p1 << sizeof(p1) << endl;
    // cout << &p2 << sizeof(p2) << endl;
    // cout << &p3 << sizeof(p3) << endl;
    // cout << n << endl;
    // inc(&n);
    // cout << n;
    short a[] = {1, 3, 5, 7, 9};
    short *p = &a[0];
    cout << &a[0] << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << (int)(p + i) << " ";
    }
}
