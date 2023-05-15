#include<iostream>
using namespace std;
int main(){
	int a[4];
	for(int i =0; i<5; ++i)cin >> a[i];
	int min = 10e8, min2 = 10e8;
	for(int i =0; i<5; ++i){
		if(a[i]<min){
			min2 = min;
			min = a[i];
		}
		if(a[i]>min && a[i]<min2) min2=a[i];
	}
	cout << min2;
}