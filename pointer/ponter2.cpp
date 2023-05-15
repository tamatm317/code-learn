#include <iostream>
#include <cstring>
using namespace std;
// int swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
int main()
{
    // int a, b;
    // cin >> a >> b;
    // cout << &n << endl;
    // cout << *(&swap(a, b)) << endl;
    int a[5] = {1, 2, 53, 4, 2};
    int *p = *(&a);
    cout << &p << endl;
    cout << *(&p) << endl;
    ++p;
    cout << *(&p) << endl;
}