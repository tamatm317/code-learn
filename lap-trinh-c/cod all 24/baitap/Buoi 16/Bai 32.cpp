//16.32  phan 1
#include<stdio.h>

int mang1[20],mang2[20],dem1,dem2;

void tachso(long long a,long long b){
	dem1=0;dem2=0;
	while(a>0){
		mang1[dem1++]=a%10;
		a/=10;
	}
	while(b>0){
		mang2[dem2++]=b%10;
		b/=10;
	}
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long a,b;
		scanf("%lld %lld",&a,&b);
		tachso(a,b);
		for(int i=0;i<dem1;i++) if(mang1[i]==6) mang1[i]=5;
		for(int i=0;i<dem2;i++) if(mang2[i]==6) mang2[i]=5;	
			
		long long min1=0,min2=0;
		for(int i=dem1-1;i>=0;i--) min1=min1*10+mang1[i];
		for(int i=dem2-1;i>=0;i--) min2=min2*10+mang2[i];
		for(int i=0;i<dem1;i++) if(mang1[i]==5) mang1[i]=6;
		for(int i=0;i<dem2;i++) if(mang2[i]==5) mang2[i]=6;
		long long max1=0,max2=0;
		for(int i=dem1-1;i>=0;i--) max1=max1*10+mang1[i];
		for(int i=dem2-1;i>=0;i--) max2=max2*10+mang2[i];
		printf("%lld %lld\n",min1+min2,max1+max2);
	}
}
