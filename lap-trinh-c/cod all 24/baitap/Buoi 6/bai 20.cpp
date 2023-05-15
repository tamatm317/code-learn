//c1
#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	for(int i=a;i>=1;i--){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		for(int j=1;j<=(a-i)*2;j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=2;i<=a;i++){
		for(int j=1;j<=i;j++){
			printf("*");
		}
		for(int j=1;j<=2*(a-i);j++){
			printf("~");
		}
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}




//c2
//#include <stdio.h>
//
//int main(){
//	int n,tam;
//	scanf("%d",&n);
//	for(int i=0;i<2*n-1;i++){
//		tam=(i>=n)?2*n-i-2:i;
//		for(int j=1;j<=2*n;j++)
//			if(j>=n-tam+1&&j<=n+tam) printf("~");
//			else printf("*");		
//		printf("\n");	
//	}
//}



//c3
//#include <stdio.h>
//
//int main(){
//    int n,di=-1;
//    scanf("%d", &n);
//    for (int i = n; i <= n; i += di){
//        for (int j = 1; j <= 2 * n; ++j)
//            if ((j > i) && (j <= 2 * n - i)) printf("~");
//            else printf("*");
//        if (i == 1) di = 1;
//        printf("\n");
//    }
//}
