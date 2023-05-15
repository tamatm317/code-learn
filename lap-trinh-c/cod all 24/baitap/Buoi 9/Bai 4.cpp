#include <stdio.h>
#include <math.h>

int ktra(int x){
    int kc =sqrt(x);
    if (pow(kc,2)==x) return 1;
    else return 0;
}

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;i++){
    	int a,b;
        scanf("%d%d",&a,&b);
        int d=0;
        for(int i=a;i<=b;i++){
        	if (ktra(i) == 1) d++;
		}
		printf("%d\n",d);
    }
    return 0;
}
