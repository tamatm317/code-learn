#include <iostream>
#include <string>
#include<map>
#include<sstream>
#include<vector>
using namespace std;
int main()
{
    map<string,int> mp;
    string n;
    getline(cin, n);
    stringstream ss(n);
    string word;
    vector<string> vt; 
    int i = 0;
    while(ss>>word){
        vt.push_back(word);
        mp[vt[i++]]++;
    }
    for(int i= 0; i<vt.size();++i){
        if(mp[vt[i]]!=0){
            cout << vt[i] << " " ;
        }
        mp[vt[i]] =0;
    }
}