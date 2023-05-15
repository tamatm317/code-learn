//9.6   c1
#include <stdio.h>
#include <math.h>

int main(){
    int m;
    scanf("%d",&m);
    for (int i=1;i<=m;++i){
    	int a;
        scanf("%d",&a);
        int d=0;
        for(int i=1;i<=a;++i){
        	if (a%i == 0) ++d;
		}
		printf("%d\n",d);
    }
    return 0;
}





//9.6    c2
#include <stdio.h>
#include <math.h>

int main(){
    int m;
    scanf("%d",&m);
    for (int j=1;j<=m;++j){
    	int a;
        scanf("%d",&a);
        int d=0;
        for(int i=1;i<=sqrt(a);++i){
        	if (!(a%i)) d+=2;
		}
		int tam=sqrt(a);
		if(pow(tam,2)==a) d--;
		printf("%d\n",d);
    }
    return 0;
}




