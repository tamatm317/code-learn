//12.21
#include <stdio.h>
#include <string.h>
#include <math.h>

int nt(int n) {
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++)
		if(n%i==0) return 0;
	return 1;
}

int main () {
	int n;
	scanf("%d",&n);
	int a[n+1],b[1000];
	memset(b,0,sizeof(b));
	for(int i=0; i<n; ++i) {
		scanf("%d",&a[i]);
		b[a[i]]++;
	}
	for(int i=0; i<1000; ++i) {
		if(b[i]&&nt(i))
			printf("%d xuat hien %d lan\n",i,b[i]);
	}
	return 0;
}













//c2
//#include <stdio.h>
//
//int main (){
//	int n;
//	scanf("%d",&n);
//	int a[n+1];
//	int a2=0, a3=0, a5=0,a7=0;
//	for(int i=0;i<n;++i) scanf("%d",&a[i]);
//	int d;
//	for(int i=0;i<n;++i){
//		if(a[i]==2) a2++;
//		else if(a[i]==3) a3++;
//		else if(a[i]==5) a5++;
//		else if(a[i]==7) a7++;
//	}
//	if(a2) printf("2 xuat hien %d lan\n",a2);
//	if(a3) printf("3 xuat hien %d lan\n",a3);
//	if(a5) printf("5 xuat hien %d lan\n",a5);
//	if(a7) printf("7 xuat hien %d lan",a7);
//	return 0;
//}
