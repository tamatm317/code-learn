#include<stdio.h>
#include<stdbool.h>

int daonguoc(int n) 
{
	int s = 0;
	while(n>0)
	{
		int r = n % 10;
		s *= 10;
		s += r;
		n /= 10;
	}
	return s;
}

bool sothuannghich(int n)
{
//	printf("-%d-%d\n",n,daonguoc(n));
	if(n < 10) return 1;
	if(n == daonguoc(n)) return 1;
	return 0;
}
bool chuso6(int n)
{
	int dem1 = 0;
	while (n /= 10)
	{
		if ((n % 10) == 6)
		{
			++dem1;
		}
	}
	if (dem1 >= 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



bool tongbang8(int n) {
	int r;
	int s=0;
	while(n!=0) {
		r=n%10;
		s+=r;
		n/=10;
		}
	if(s%10==8) return 1;
	else return 0;
}
int main()
{
	int a, b; 
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; ++i)
	{
		if(sothuannghich(i)==1&&tongbang8(i)==1&&chuso6(i)==1) {
//		if(sothuannghich(i)==1) {
			printf("%d ", i);
		}
	}
}


