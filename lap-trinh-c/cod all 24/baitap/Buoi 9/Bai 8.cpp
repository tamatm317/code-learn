#include <stdio.h>
#include <math.h>

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
    	long long a;
        scanf("%lld",&a);
        long long d=0;
        for(long long i=1;i<=sqrt(a);i++){
        	if (a%i == 0) d=d+i+a/i;
		}
		d-=a;
		int tam=sqrt(a);
		if(pow(tam,2)==a) d-=sqrt(a);
		
		if(d==a) printf("YES\n");
		else printf("NO\n");
    }
    return 0;
}
