//4.3  
#include<stdio.h>
#include <math.h>

int n;
int nto(int x){
	if(x<2) return 0;
	for(int i=2;i<x;++i){
		if(x%i==0) return 0;
	}
	return 1;
}

int tang(int x) {
 	int t=x%10;
 	x/=10;
 	while(x>0){
 		if(t<=x%10) return 0;
 		t=x%10;
 		x/=10;
	}
	return 1;
}


int giam(int x) {
 	int t=x%10;
 	x/=10;
 	while(x>0){
 		if(t>=x%10) return 0;
 		t=x%10;
 		x/=10;
	}
	return 1;
}

int main(){
	int a,dem=0;
	scanf("%d",&a);
	for(int i=pow(10,a-1);i<pow(10,a);++i){
		if(nto(i)==1 && ( tang(i)==1 || giam(i)==1)){
			++dem;
		} 
	}
	printf("%d",dem);
	return 0;
}
