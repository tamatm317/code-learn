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

void sapxep(sinhvien *a, int n){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n;++j){
			if(a[i].A+a[i].B+a[i].C>a[j].A+a[j].B+a[j].C){
				sinhvien c=a[j];
				a[j]=a[i];
				a[i]=c;
			}
		}
	}
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
			printf("%d\n",*n);
			for(int i=0;i<dem;++i){
				printf("%d ",b[i]);
			}
			break;
		}
	}
}

int main(){
	int n=0;
	sinhvien *a=(sinhvien *)malloc(n*sizeof(sinhvien));
	menu(a,&n);
	sapxep(a,n);
	
	for(int i=0;i<n;++i){
		printf("\n%d %s%.1f %.1f %.1f ",a[i].ma,a[i].ten,a[i].A,a[i].B,a[i].C);
	}
	free(a);
}


