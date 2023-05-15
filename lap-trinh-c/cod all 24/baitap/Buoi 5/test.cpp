#include <stdio.h>

int main(){
	int n,tam;
	scanf("%d",&n);
	for(int i=0;i<2*n-1;i++){
		tam=(i>=n)?2*n-i-2:i;
		for(int j=1;j<=tam+n;j++){
			if(j<=2*tam) printf("~");
			else printf("*");
		}
		printf("\n");
	}
}


#include<stdio.h>
#include<math.h> 
int main()
{
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n;j++)
		{
			if(abs(n-j)<=i-2) 
				printf("~");
			else printf("*");
		 } printf("\n"); 
	 } 
	 for(i=n-1;i>=1;i--)
	{
		for(j=1;j<=2*n;j++)
		{
			if(abs(n-j)<=i-2) 
			printf("~");
			else printf("*"); 
		 } printf("\n"); 
	 } 
 }


























