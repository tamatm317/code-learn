/*
2 2 7
2 7
2(2) 7(1)
2x2x7
2^2*7^1
*/
#include<iostream>
#include<cmath>
using namespace std;

void dk1(int n);
void dk2(int n);
void dk3(int n);
void dk4(int n);
void dk5(int n);
int main (){
    int n;
    cin>>n;
    dk1(n);
    dk2(n);
    dk3(n);
    dk4(n);
    dk5(n);
}

int snt(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0) return 0;
    }
    return n>1;
}

void dk1(int n){
    for(int i=2;i<=sqrt(n);++i){
        while(n%i==0){
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n!=1){
        cout<<n<<endl;
    }
}

void dk2(int n){
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            cout<<i<<" ";
            while(n%i==0){
                n/=i;
            }
        }
    }
    if(n!=1){
        cout<<n<<endl;
    }
}

void dk3(int n){
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            int cnt = 0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<<"("<<cnt<<") ";
        }
    }
    if(n!=1){
        cout<<n<<"(1) "<<endl;
    }
}

void dk4(int n){
    for(int i=2;i<=sqrt(n);++i){
        while(n%i==0){
            cout<<i<<"x";
                n/=i;
        }
    }
    if(n!=1){
        cout<<n<<endl;
    }
}

void dk5(int n){
    for(int i=2;i<=sqrt(n);++i){
        if(n%i==0){
            int cnt=0;
            while(n%i==0){
                cnt++;
                n/=i;
            }
            cout<<i<<"^"<<cnt<<"*";
        }
    }
    if(n!=1){
        cout<<n<<"^1";
    }
}