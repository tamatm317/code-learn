//Bai nay de loi vi khong cho ngay san xuat ma keu cai nao truoc nam 2003

#include <stdio.h>
#include <stdlib.h>
int n;

struct ngay{
	int ngay, thang, nam;
};

struct HOPSUA{
	char nh[21];
	float tl;
	struct ngay ng;
};
typedef struct HOPSUA hps;

void xuat(hps hs){
	printf("Nhan hieu: %s",hs.nh);
	printf("\nTrong luong: %.2f",hs.tl);
	printf("\nHSD: %d/%d/%d",hs.ng.ngay,hs.ng.thang,hs.ng.nam);
}

void nhap(hps &hs){
	printf("Nhan hieu: ");
	gets(hs.nh);
	printf("Trong luong: ");
	scanf("%f",&hs.tl);
	fflush(stdin);
	printf("HSD: ");
	scanf("%d%d%d",&hs.ng.ngay,&hs.ng.thang,&hs.ng.nam);
	fflush(stdin);
}

int t2003(hps hs[]){
	int dem=0;
	for(int i=0;i<n;i++){
		if(hs[i].ng.nam<2003) dem++;
	}
	return dem;
}

void mn(hps hs[]){
	int maxn=hs[0].ng.nam;
	int maxt=hs[0].ng.thang;
	int maxd=hs[0].ng.ngay;
	for(int i=0;i<n;i++){
		if(maxn<hs[i].ng.nam){
			maxn=hs[i].ng.nam;
			maxt=hs[i].ng.thang;
			maxd=hs[i].ng.ngay;
		}else if(maxn==hs[i].ng.nam){
			if(maxt<hs[i].ng.thang){
				maxt=hs[i].ng.thang;
				maxd=hs[i].ng.ngay;
			}else if(maxt=hs[i].ng.thang){
				if(maxd<hs[i].ng.ngay){
					maxd=hs[i].ng.ngay;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(hs[i].ng.nam==maxn&&maxt==hs[i].ng.thang&&maxd=hs[0].ng.ngay){
			xuat(hs[i]);
			break;
		}
	}
}

void sx(hps hs[]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(maxn<hs[j].ng.nam){
				maxn=hs[i].ng.nam;
				maxt=hs[i].ng.thang;
				maxd=hs[i].ng.ngay;
			}else if(maxn==hs[i].ng.nam){
				if(maxt<hs[i].ng.thang){
					maxt=hs[i].ng.thang;
					maxd=hs[i].ng.ngay;
				}else if(maxt=hs[i].ng.thang){
					if(maxd<hs[i].ng.ngay){
						maxd=hs[i].ng.ngay;
					}
				}
			}
		}
	}
}

int main(){
	scanf("%d",&n);
	fflush(stdin);
	hsp hs[n];
	for(int i=0;i<n;i++){
		printf("\nNhap hop sua thu %d: \n",i+1);
		nhap(hs[i]);
	}
	for(int i=0;i<n;i++){
		printf("\n\nHop sua thu %d: \n",i+1);
		xuat(hs[i]);
	}
//	printf("\n\nCac hoc sinh co diem trung binh <5: ");
//	for(int i=0;i<n;i++){
//		if(hs[i].toan<5) printf("\n%s",hs[i].ten);
//	}
//	printf("\n\nDanh sach theo dtb: \n");
//	dtb(hs);
	printf("\n\nso luong hop sua trong nam 2003 la: %d",t2003(hs));
	mn(hs);
	return 0;
}

