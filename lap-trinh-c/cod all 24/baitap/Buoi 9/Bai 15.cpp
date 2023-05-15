//9.15
#include <stdio.h>

int main(){
	int a,c=0,l=0;
	scanf("%d",&a);
	while(a!=0){
		int t=a%10;
		if(t%2==1) l++;
		else c++;
		a/=10;
	}
	printf("%d %d",l,c);
	return 0;
}


