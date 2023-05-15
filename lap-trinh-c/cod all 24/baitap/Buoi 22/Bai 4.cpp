#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien{
	int ma,danhdau;
	char ten[100];
	float MonA,MonB,MonC,tong;
};
//typedef struct sinhvien sinhvien;

void nhap(sinhvien *sv){
	sv->danhdau=0;
	printf("Nhap ten: ");
	gets(sv->ten);
	printf("Nhap diem A, B, C: ");
	scanf("%f%f%f",&sv->MonA,&sv->MonB,&sv->MonC);
	getchar();
	sv->tong=sv->MonA+sv->MonB+sv->MonC;
}

void chon1(int &n,char a[],sinhvien sv){
	int x;
	printf("\nNhap so luong sinh vien ban muon them: ");
	scanf("%d",&x);
	getchar();
	for(int i=n;i<n+x;++i){
		printf("\nNhap thong tin thu %d: \n",i+1);
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b4.bin");
		f=fopen(a,"wb");
		sv.ma=i+1;
		nhap(&sv);
		fwrite(&sv,sizeof(sinhvien),1,f);
		fclose(f);		
	}
	n+=x;
}

void chon2(char a[],sinhvien sv){
	int x;
	printf("\nNhap ma sinh vien ban muon sua: ");
	scanf("%d",&x);
	getchar();
	FILE *f;
	sprintf(a, "%d", x);
	strcat(a,"b4.bin");
	f=fopen(a,"wb");
	nhap(&sv);
	sv.ma=x;
	sv.danhdau=1;
	fwrite(&sv,sizeof(sinhvien),1,f);
	fclose(f);
}

void chon4(int &n,char a[],sinhvien sv){
	printf("\n\nCac sinh vien duoc thay doi: ");
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b4.bin");  
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		if(sv.danhdau==1) printf("\n%s ",sv.ten);
		fclose(f);
	}
	printf("\n");
	system("pause");
}

void chon5(int &n,char a[],sinhvien sv){
	sinhvien ss[n];
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b4.bin");
		f=fopen(a,"rb");
		fread(&ss[i],sizeof(sinhvien),1,f);
		fclose(f);
	}
	printf("\nDanh sach sau khi sap xep: \n");
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(ss[i].tong>ss[j].tong){
				sinhvien t=ss[i];
				ss[i]=ss[j];
				ss[j]=t;
			}
		}
		printf("%d %s %.2f %.2f %.2f\n",ss[i].ma,ss[i].ten,ss[i].MonA,ss[i].MonB,ss[i].MonC);
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
		printf("\n1.Nhap them thong tin. ");
		printf("\n2.Thay doi thong tin. ");
		printf("\n3.So sinh vien duoc them. ");
		printf("\n4.Cac sinh vien duoc sua. ");
		printf("\n5.In danh sach. ");
		printf("\n6.Ket thuc chuong trinh. ");
		printf("\n   ==========MENU===========");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1) chon1(n,a,sv);
		else if(c==2) chon2(a,sv);
		else if(c==3) {
			printf("\n\nSo luong sinh vien duoc them: %d\n",n);
			system("pause");
		}
		else if(c==4) chon4(n,a,sv);
		else if(c==5) chon5(n,a,sv);
		else break;
	}		
}


