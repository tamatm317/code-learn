//11.1
#include <stdio.h>
#include <math.h>
//6 5 2 3 4 5 6 
int check(int a[], int n){
	for(int i=0;i<n-1;++i){
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}

void in(int a[], int n){
	for(int i=0;i<n;++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}

int main (){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i){
		scanf("%d",&a[i]);
	}
	
//	for(int i=0;i<n-1;++i){
//		for(int j=i+1;j<n;++j){
//			if(a[i]>a[j]){
//				int x = a[i];
//				a[i] = a[j];
//				a[j] = x;
//			}
//		}
//	}
	
	for(int i = 0;i<n;++i){
		int min = i;
		for(int j = i+1;j<n;++j){
			if(a[min]>a[j]) min = j;
		}
		int x = a[i];
		a[i] = a[min];
		a[min] = x;
		in(a,n);
	}
	
	
//	for (int i = 0; i < n; ++i){
//		printf("%d ",a[i]);
//	}
}
//Tang dan
//5 6 8 2 7 2 

//2 6 8 5 7 2
//2 2 8 5 7 6
//
//2 2 5 8 7 6
// 
//2 2 5 6 7 8
//
//7







//a = 5; b = 10;
//
//x = a = 5;
//a = b = 10;
//b = x = 5;


















