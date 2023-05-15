#include<iostream>
using namespace std;
void input(int a[], int n){
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
}
void output(int a[], int b[], int n, int m){
    int c[n+m];
    int x = 0, y = 0;
    for(int i =0; i<m+n; ++i){
        if(a[x]<b[y] && x<
            ){
            c[i] = a[x++];
        }
        else{
            if(y<m) c[i] = b[y++];
            else c[i] = a[x++];
        }
    }
    for(int i = 0; i<n+m;++i){
        cout << c[i] << " ";
    }

}
int main(){
    int n,m;
    cin >> n >> m;
    int a[n];
    int b[m];
    input(a,n);
    input(b,m);
    output(a,b,n,m);
    return 0;
}