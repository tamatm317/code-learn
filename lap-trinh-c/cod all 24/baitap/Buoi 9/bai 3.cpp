//9.3 c1
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
        int tam=0;
        for(int i=a;i<=b;i++){
        	if (ktra(i) == 1) printf("%d ",i),tam=1;
		}
		if(tam==0) printf("0");
	    printf("\n");
    }
    return 0;
}

//9.3 c2
#include<stdio.h>
#include<math.h>
int main() {
	int t,n,i,a,b,d;
	scanf("%d",&t);//t la so test case;
	for(i=1; i<=t; i++) {
		d=0;
		scanf("%d%d",&a,&b);//nhap khoang (a,b) can xet;
		int start=ceil(sqrt(a));     //ham lam tron len
		int end=(sqrt(b));     
		for(int j=start; j<=end; j++) {
			d++;
			printf("%d ",j*j);
		}
		if(d==0) printf("0");
		printf("\n");
	}
	return 0;
}
