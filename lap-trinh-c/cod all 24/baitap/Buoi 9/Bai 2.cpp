#include <stdio.h>
#include <math.h>

int ktra(long long x){
    long long kc =sqrt(x);
    if (pow(kc,2)==x) return 1;
    else return 0;
}

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
    	long long n;
        scanf("%lld", &n);
	    if (ktra(n) == 1) printf("YES\n");
		else printf("NO\n");
    }
    return 0;
}


