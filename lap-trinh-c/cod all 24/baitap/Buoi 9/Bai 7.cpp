//9.7 c1
#include <stdio.h>
#include <math.h>

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
    	long long a;
        scanf("%lld",&a);
        int d=0;
        for(int i=1;i<=sqrt(a);i++){
        	if (a%i == 0) d+=2;
		}
		int tam=sqrt(a);
		if(pow(tam,2)==a) d--;
		
		if(d%2==0) printf("NO\n");
		else printf("YES\n");	
    }
    return 0;
}





//7.2 c2
#include <stdio.h>
#include <math.h>

int check(long long n){
	long long x= sqrt(n);
	return x*x==n;
}

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
    	long long a;
        scanf("%lld",&a);
		if(check(a)) printf("YES\n");
		else printf("NO\n");
		
    }
    return 0;
}
