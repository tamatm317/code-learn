#include<iostream>
using namespace std;
struct number{
	int val;
	int frequency;
};
int check(int n){
	while(n>=10){
		int temp = n%10;
		if((n/10)%10>temp){
			return 0;
		}
		n/=10;
	}
	return 1;
}
int find(number a[], int n, int x){
	for(int i = 0; i<n; ++i){
		if(a[i].val == x)
			return i;
	}
	return -1;
}
int comparator(const void *a, const void *b){
	number*x = (number*)a;
	number*y = (number*)b;
	return y->frequency - x->frequency;
}
int main(){
	number a[100000];
	int x, count = 0;
	while(cin>>x){
		if(check(x)){
			int idx = find(a,count,x);
			if(idx!=-1){
				a[idx].frequency +=1;
			}
			else{
				a[count].val  = x;
				a[count].frequency = 1;
				count++; 
			}
		}
	}
	qsort(a,count, sizeof(number),comparator);
	for(int i = 0; i<count;++i){
		cout << a[i].val << " " << a[i].frequency << endl;
	}
}