#include<iostream>
//#include<vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,s,r;
        cin >> n >> s >> r;
        int check = s - r;
        cout << check << " ";
        n--;
        while (n != 0){
            for (int i = check; i > 0; i--){
                if ( (r-i)==0){
                    if(n==1){
                        cout << i << " ";
                        r -= i;
                        break;
 
                    }
                    else{
                        continue;
                    }
                }
                if ( (r - i) / n >= 1){
                    cout << i << " " ;
                    r -= i;
                    n--;
                    break;
                }
            }
        }
        cout << endl;
    }
}