//4.10
#include<stdio.h>
main(){
	int n;
	int t,c=0,l=0;
	scanf("%d",&n);
	while (n>0){
		t=n%10;
		if ((t%2)==0) c++
		else l++;
		n /=10;
	}
	printf("%d %d",c,l);
	return 0;
}
