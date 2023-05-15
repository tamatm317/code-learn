//8.1
#include <stdio.h>
#include <math.h>

int main(){
	int n,dem=0;
	scanf("%d",&n);
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) dem+=2;
	}
	int a=sqrt(n);
	if(pow(a,2)!=n) dem++;
	printf("%d",dem);
	return 0;
}
