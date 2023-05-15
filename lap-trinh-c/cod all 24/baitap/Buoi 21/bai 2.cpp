#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien{
	int ma;
	char ten[31];
	float A,B,C;
};
typedef struct sinhvien sinhvien;

void nhap(sinhvien *a){
	getchar();
	gets(a->ten);
	scanf("%f%f%f",&a->A,&a->B,&a->C);
	getchar();
}

void menu(sinhvien *a,int *n){
	int t,b[100], dem=0;
	memset(b,0,sizeof(b));
	while (1){
		scanf("%d",&t);
		getchar();
		if(t==1){
			int x;
			scanf("%d",&x);
			getchar();
			a=(sinhvien *)realloc(a,(*n+x)*sizeof(sinhvien));
			for(int i=*n;i<*n+x;++i){
				nhap(&a[i]);
				a[i].ma=i+1;
			}
			*n+=x;
		}else if(t==2){
			int x;
			scanf("%d",&x);
			getchar();
			b[dem]=x;
			++dem;
			nhap(a+x-1);
		}else{
			int h; scanf("%d",&h);
			if(h==1) printf("%d",*n);
			else if(h==2) {
				for(int i=0;i<dem;++i){
					printf("%d ",b[i]);
				}
			}else{
				for(int i=0;i<*n;++i){
					printf("\n%d %s%.1f %.1f %.1f ",a[i].ma,a[i].ten,a[i].A,a[i].B,a[i].C);
				}
			}
			break;
		}
	}
}

int main(){
	int n=0;
	sinhvien *a=(sinhvien *)malloc(n*sizeof(sinhvien));
	menu(a,&n);
	free(a);
}
