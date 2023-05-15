#include <stdio.h>

struct mathang{
	int ma;
	float mua,ban,chenhlech;
	char ten[100],nhom[100];
};
typedef struct mathang mathang;

void nhap(mathang *mh){
	getchar();
	gets(mh->ten);
	gets(mh->nhom);
	scanf("%f%f",&mh->mua,&mh->ban);
	getchar();
	mh->chenhlech=mh->ban - mh->mua;
}

void xuat(mathang mh){
	printf("%d %s%s%.2f\n",mh.ma,mh.ten,mh.nhom,mh.chenhlech);
}

void sapxep(mathang mh[],int n){
	for(int i=1;i<=n;++i){
		for(int j=i+1;j<=n;++j){
			if(mh[i].chenhlech<mh[j].chenhlech){
				mathang m=mh[i];
				mh[i]=mh[j];
				mh[j]=m;
			}
		}
		xuat(mh[i]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	mathang mh[n+1];
	for(int i=1;i<=n;++i){
		mh[i].ma=i;
		nhap(&mh[i]);
	}
	sapxep(mh,n);
}
