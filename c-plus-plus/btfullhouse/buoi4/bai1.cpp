#include<iostream>
using namespace std;
void dec_to_bin(long long n){
    int binary[64];
    int i = 0;
    while(n>0){
        if((n%10)%2==0) binary[i] = 0;
        else binary[i] = 1;
        ++i;
        n/=2;
    }
    for(int j = i-1; j>=0; --j){
        cout << binary[j];
    }
}
int main(){
    long long n;
    cin >> n;
    dec_to_bin(n);
}