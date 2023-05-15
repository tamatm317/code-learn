//3.17
#include<stdio.h>
main(){
	long long n;
	int t,c=0,l=0;
	scanf("%lld",&n);
	while (n!=0){
		t=n%10;
		if ((t%2)==0){
			c++;
		}else{
			l++;
		}
		n /=10;
	}
	if(c==l){
		printf("YES");
	}else{
		printf("NO");
	}
	return 0;
}

