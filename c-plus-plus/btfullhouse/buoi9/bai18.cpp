#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	int a[t][2];
	int n=t;
	for(int i=0;i<n;i++) {
		cin>>a[i][0];
		cin>>a[i][1];
	}
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++) {
			if(a[i][1]>a[j][1]) {
				int tam1=a[i][0];
				a[i][0]=a[j][0];
				a[j][0]=tam1;
				
				int tam2=a[i][1];
				a[i][1]=a[j][1];
				a[j][1]=tam2;
			}
		}
	}
	
	int b[n];
	for(int i=0;i<n;i++) {
		b[i]=1;
	}
		
	for(int i=1;i<n;i++) {
		for(int j=i-1;j>=0;j--) {
			if(a[j][1]<=a[i][0]) {
				b[i]= max(b[i], b[j]+1);
			}
		}
	}
	int max=0;
	for(int i=0;i<n;i++) {
		if(b[i]>max) max=b[i];
	}
	cout<<max;
}