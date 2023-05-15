#include <stdio.h>
#include <math.h>

int check(int a, int b){
	if(a%b==0) return b;
	else if(b%a==0) return a;
	else {
		if(a>b) return check(a-b,a);
		else return check(a,b-a);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int d=0;
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j)
			if(check(a[i],a[j])==1) d++;
	}
	printf("%d",d);
}
