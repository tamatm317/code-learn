#include <stdio.h>

int UCLN(int x, int y){
	if(x%y==0) return y;
	else if(y%x==0) return x;
	else return UCLN(y,x%y);
}

struct phanso{
	int tu,mau;
};
typedef struct phanso phanso;

void rutgon(int *a, int *b){
	int c=UCLN(*a,*b);
	*a/=c;
	*b/=c;
}

void in(int a, int b){
	printf("%d/%d ",a,b);
}

void cong(phanso ps1, phanso ps2){
	phanso ps3;
	rutgon(&ps1.tu,&ps1.mau);
	rutgon(&ps2.tu,&ps2.mau);
	
	int UC=UCLN(ps1.mau,ps2.mau);
	int BC=ps1.mau*ps2.mau/UC;
	
	ps1.tu=ps1.tu*(BC/ps1.mau);
	ps2.tu=ps2.tu*(BC/ps2.mau);
	ps3.mau=BC;
	in(ps1.tu,ps3.mau);
	in(ps2.tu,ps3.mau);
	ps3.tu=ps1.tu+ps2.tu;
	rutgon(&ps3.tu,&ps3.mau);
	printf("\n");
	in(ps3.tu,ps3.mau);
}

int main(){
	phanso ps1,ps2,ps3;
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		scanf("%d%d%d%d",&ps1.tu,&ps1.mau,&ps2.tu,&ps2.mau);
		printf("Case #%d:\n",i);
		cong(ps1,ps2);
		ps3.tu=ps1.tu*ps2.mau;
		ps3.mau=ps1.mau*ps2.tu;
		rutgon(&ps3.mau,&ps3.tu);
		printf("\n");
		in(ps3.tu,ps3.mau);
		printf("\n");
	}
}
