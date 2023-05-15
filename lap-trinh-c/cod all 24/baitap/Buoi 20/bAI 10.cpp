#include <stdio.h>
#include <string.h>


struct chuyenbay{
	char ma[6], noidi[21], noiden[21];
	int ngay, gio;
};

void nhap(chuyenbay &cb){
	printf("Nhap ma chuyen bay: ");
	gets(cb.ma);
	printf("Nhap ngay: ");
	scanf("%d",&cb.ngay);
	printf("Nhap gio: ");
	scanf("%d",&cb.gio);
	getchar();
	printf("Nhap ma noi di: ");
	gets(cb.noidi);
	printf("Nhap ma noi den: ");
	gets(cb.noiden);
}

void tim(chuyenbay cb[],int n){
	int b[32];
	memset(b,0,sizeof(b));
	for(int i=1;i<=n;++i){
		b[cb[i].ngay]++;
	}
	int max=0,vt=0;
	for(int i=1;i<=n;++i){
		if(b[cb[i].ngay]>max){
			max=b[cb[i].ngay];
			vt=cb[i].ngay;
		}
	}
	printf("\n\nNgay co nhieu chuyen bay nhat la: %d",vt);
}

void xuat(chuyenbay cb[],int n){
	printf("\n  STT\t|\tMa chuyen bay\t |\tNgay   |   Gio   |\tNoi di\t\t |\tNoi den\n");
	for(int i=1;i<=n;i++){
		printf("   %-5d|\t%-14s   |\t%-7d|    %-5d|\t%-14s   |\t%-14s\n"
		,i,cb[i].ma,cb[i].ngay,cb[i].gio,cb[i].noidi,cb[i].noiden);
	}
	printf("\n\t------------------------------------------------------------\n");
}

int main(){
	int n;
	printf("Nhap so luong chuyen bay: ");
	scanf("%d",&n);
	getchar();
	chuyenbay cb[n+1];
	for(int i=1;i<=n;++i){
		printf("\nNhap thong tin chuyen bay thu %d: \n",i);
		nhap(cb[i]);
	}
	
	printf("\n\n\n\t-------------------- Danh sach cac chuyen bay ------------------\n");
	xuat(cb,n);
	
	tim(cb,n);
	
	char tim[6];
	printf("\n\nNhap ma chuyen bay ban muon tim: ");
	gets(tim);
	printf("\n\n\n\t\t----------------- Thong tin chuyen bay can tim -----------------\n");
	printf("  STT\t|\tMa chuyen bay\t |\tNgay   |   Gio   |\tNoi di\t\t |\tNoi den\n");
	for(int i=1;i<=n;++i){
		if(strcmp(tim,cb[i].ma)==0){
			printf("   %-5d|\t%-14s   |\t%-7d|    %-5d|\t%-14s   |\t%-14s\n"
			,i,cb[i].ma,cb[i].ngay,cb[i].gio,cb[i].noidi,cb[i].noiden);
		}
	}
	printf("\t\t-----------------------------------------------------------------\n");
}

//5
//A12
//15
//8
//AC B
//BB D
//B52
//12
//14
//DG H
//JKM
//DD4
//15
//6
//KJL
//NM N
//DD5
//18
//18
//KSJDH KJSDH
//NSDF SDF
//DD7
//17
//20
//KLM
//MJ N
