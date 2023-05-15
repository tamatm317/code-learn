//12.5 c1 
#include <stdio.h>
int ktra1(int n){
	while(n!=0){
		if(n%10==1) return 1;
		n/=10;
	}
	return 0;
}
int ktra9(int n){
	while(n!=0){
		if(n%10==9) return 1;
		n/=10;
	}
	return 0;
}
int main (){
	int n,dem=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		if(ktra1(a[i])&&ktra9(a[i])) dem++;
	}
	printf("%d",dem);
	return 0;
}


//12.5 c2
#include <stdio.h>
int ktra19(int n){
	int a1=0,a9=0;
	while(n!=0){
		if(n%10==1) a1++;
		else if(n%10==9) a9++;
		n/=10;
	}
	if(a1&&a9) return 1;
	return 0;
}
int main (){
	int n,dem=0;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n;++i){
		if(ktra19(a[i])) dem++;
	}
	printf("%d",dem);
	return 0;
}

