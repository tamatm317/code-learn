#include<iostream>
using namespace std;
int min(int a, int b){
    return a<b?a:b;
}
void swap(int &a, int &b){
    int temp = a;
    a=b; b= temp;
}
void quickSort(int a[], int left, int right){
    int pivot = a[(left+right)/2];
    int l = left, r= right;
    do{
        while(a[l]<pivot)++l;
        while(a[r]>pivot)r--;
        if(l<=r){
            swap(a[l], a[r]);
            l++;r--;
        }
    }while(l<=r);
    if(left<r){
        quickSort(a,left,r);
    }
    if(l<right){
        quickSort(a,l,right);
    }
}
void input(int a[], int n){
    for(int i = 0; i<n; ++i){
        cin >> a[i];
    }
    quickSort(a,0,n-1);
}

void output(int a[], int b[], int n, int m){
	int i = 0, j = 0, g = 0, h = 0;
    int giao[min(n,m)], hop[n+m];
    while(i<n&&j<m){
   		if(a[i]==b[j]){
   			giao[g] = a[i];
   			hop[h] = a[i];
   			++i, ++j, ++g, ++h;
   		}
   		else if(a[i]>b[j]){
   			hop[h++] = b[j++];
   		}
   		else{
   			hop[h++] = a[i++];
   		}
    }
    while(i<n){
    	hop[h++] = a[i++];
    }
    while(j<m) hop[h++] = b[j++];
    for(int i=0; i<h;++i){
        cout << hop[i] << " ";
    }
    cout << endl;
    for(int i = 0; i<g; ++i){
    	cout << giao[i] << " ";
    }
}
int main(){

    int n,m;
    cin >> n >> m ;
    int a[n];
    int b[m];
    input(a,n);
    input(b,m);
    output(a,b,n,m);
    return 0;
}