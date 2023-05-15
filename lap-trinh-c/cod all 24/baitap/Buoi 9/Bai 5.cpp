//9.5   c1
#include <stdio.h>
#include <math.h>

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;++i){
    	int a;
        scanf("%d",&a);
        long long d=0;
        for(int i=1;i<=a;++i){
        	if (a%i == 0) d+=i;
		}
		printf("%lld\n",d);
    }
    return 0;
}


//9.5   c2
#include <stdio.h>
#include <math.h>

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;++i){
    	int a;
        scanf("%d",&a);
        long long d=0;
        for(int i=1;i<=sqrt(a);++i){
        	if (!(a%i) d=d+i+a/i;
		}
		int tam=sqrt(a);
		if(pow(tam,2)==a) d-=sqrt(a);
		printf("%lld\n",d);
    }
    return 0;
}
