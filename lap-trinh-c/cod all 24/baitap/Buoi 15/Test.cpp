#include<stdio.h>
#include<math.h>
//~~~~ 2
//~~~ 24  2
//~~ 246  42
//~ 2468  642
// 246810 8642
int main()
{
	int n; scanf("%d",&n);
	for(int i=1;i<=n;++i)
	{
		int dem=2;
		for(int j=1;j<=n-i;++j)
		{
			printf("~");
		}
		for(int k=1;k<=i;++k)
		{
			printf("%d",dem);
			dem+=2;
		}
		int dem1=2;
		for(int h=1;h<=i-1;h++)
		{
			printf("%d",dem1);
			dem1+=2;
		}
		printf("\n");
	}


	return 0;
}
