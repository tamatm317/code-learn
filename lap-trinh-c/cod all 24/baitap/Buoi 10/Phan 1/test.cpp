#include <iostream>
using namespace std;
int large_input()
{
    int x,y=-1e9;
    cin>>x;
    if(x!=0) y=large_input();
    if(x>y) return x;
    return y;
}
int main()
{ 
     cout<<large_input();
}
