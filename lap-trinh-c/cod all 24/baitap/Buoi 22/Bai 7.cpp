#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien{
	int id,danhdau;
	char ten[100],ma[100];
};
//typedef struct sinhvien sinhvien;

void nhap(sinhvien *sv){
	sv->danhdau=0;
	printf("Nhap ma: ");
	gets(sv->ma);
	printf("Nhap ten: ");
	gets(sv->ten);
}

void chon1(int &n,char a[],sinhvien sv){
	int x;
	printf("\nNhap so luong sinh vien ban muon them: ");
	scanf("%d",&x);
	getchar();
	for(int i=n;i<n+x;++i){
		printf("\nNhap thong tin sinh vien thu %d: \n",i+1);
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b7.bin");
		f=fopen(a,"wb");
		sv.id=i+1;
		nhap(&sv);
		fwrite(&sv,sizeof(sinhvien),1,f);
		fclose(f);		
	}
	n+=x;
}

void chon2(int n,char a[],sinhvien sv){
	char x[100];
	printf("\nNhap ma sinh vien ban muon sua: ");
	gets(x);
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1);
		strcat(a,"b7.bin");
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		fclose(f);
		if(strcmp(sv.ma,x)==0){
			FILE *f;
			f=fopen(a,"wb");
			nhap(&sv);
			sv.id=i+1;
			sv.danhdau=1;
			fwrite(&sv,sizeof(sinhvien),1,f);
			printf("he");
			fclose(f);
			break;
		}
	}
}

void chon4(int &n,char a[],sinhvien sv){
	printf("\n\nCac sinh vien duoc thay doi: ");
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b7.bin");  
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		if(sv.danhdau==1) printf("\n%s ",sv.ten);
		fclose(f);
	}
	printf("\n");
	system("pause");
}

void chon5(int &n,char a[],sinhvien sv){
	printf("\nNhap ma so sinh vien ban muon tim: ");
	char x[100];
	gets(x);
	strlwr(x);
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a,"%d",i+1);
		strcat(a,"b7.bin");
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		strlwr(sv.ma);
		if(strncmp(x,sv.ma,strlen(x))==0) printf("\n%s",sv.ten);
		fclose(f);
	}
	printf("\n");
	system("pause");
}

void chon6(int &n,char a[],sinhvien sv){
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b7.bin");
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		printf("%d %s %s\n",sv.id,sv.ten,sv.ma);
		fclose(f);
	}
	system("pause");
}

int main(){
	sinhvien sv;
	int c,n=0;
	char a[100];
	while(1){
		system("cls");
		printf("\n\n   ==========MENU===========");
		printf("\n1.Nhap them sinh vien. ");
		printf("\n2.Thay doi thong tin. ");
		printf("\n3.So sinh vien duoc them. ");
		printf("\n4.Cac sinh vien duoc sua. ");
		printf("\n5.Tim kiem sinh vien. ");
		printf("\n6.Kiem tra file. ");
		printf("\n7.Ket thuc chuong trinh. ");
		printf("\n   ==========MENU===========");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1) chon1(n,a,sv);
		else if(c==2) chon2(n,a,sv);
		else if(c==3) {
			printf("\n\nSo luong sinh vien duoc them: %d\n",n);
			system("pause");
		}
		else if(c==4) chon4(n,a,sv);
		else if(c==5) chon5(n,a,sv);
		else if(c==6) chon6(n,a,sv);
		else break;
	}		
}


