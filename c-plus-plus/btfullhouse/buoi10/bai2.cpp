#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
int a[10000000]={0};
void input(vector<int>&a, int n){
    int x;
    for(int i= 0; i<n; ++i){
        cin >> x;
        a.push_back(x);
    }
}
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vt;
        input(vt,n);
        sort(vt.begin(),vt.end());
        int left = vt[0];
        int right = vt[n-1];
        int cnt = 0;
        // cout << left << " " << right << endl;
        for(int i = 0; i<vt.size();++i){
            a[vt[i]] = 1;
        }
        for(int i= left; i<=right; ++i){
            if(a[i]==0) ++cnt;
        }
        cout << cnt << endl;
        memset(a,0,sizeof(a));
    }
}