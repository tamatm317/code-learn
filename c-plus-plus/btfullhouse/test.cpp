#include<bits/stdc++.h>
using namespace std;
void tinh(int a, int b);
int main(){
    int a, b;
    cin >> a >> b;
    tinh(a, b);
    return 0;
}
void tinh(int a, int b){
    cout << (a*b) << endl << (a-b) << endl << (float(a)/b);
}
