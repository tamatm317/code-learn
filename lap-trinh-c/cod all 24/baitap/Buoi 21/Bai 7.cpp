#include <stdio.h>

struct ngaysinh{
	int ngay, thang, nam;
};
typedef struct ngaysinh ngaysinh;

struct sinhvien{
	int ma;
	float m1,m2,m3,tong;
	ngaysinh ngsinh;
	char ten[100];
};
typedef struct sinhvien sinhvien;

void nhap(sinhvien *sv){
	getchar();
	gets(sv->ten);
	char c;
	scanf("%d%c%d%c%d",&sv->ngsinh.ngay,&c,&sv->ngsinh.thang,&c,&sv->ngsinh.nam);
	do{
		scanf("%f%f%f",&sv->m1,&sv->m2,&sv->m3);
		getchar();
	}while(sv->m1<0||sv->m1>10||sv->m2<0||sv->m2>10||sv->m3<0||sv->m3>10);
	sv->tong=sv->m1+sv->m2+sv->m3;
}

void sx(sinhvien sv[],int n){
	for(int i=1;i<=n;++i){
		for(int j=i+1;j<=n;++j){
			if(sv[i].tong<sv[j].tong){
				sinhvien s=sv[i];
				sv[i]=sv[j];
				sv[j]=s;
			}
		}
		printf("%d %s %d/%d/%d %.1f\n",
		sv[i].ma,sv[i].ten,sv[i].ngsinh.ngay,sv[i].ngsinh.thang,sv[i].ngsinh.nam,sv[i].tong);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	getchar();
	sinhvien sv[n+1];
	for(int i=1;i<=n;++i){
		sv[i].ma=i;
		nhap(&sv[i]);
	}
	sx(sv,n);
}
