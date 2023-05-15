#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sach{
	int ma,danhdau;
	char tensach[100],tentg[100];
	float giatien;
};
//typedef struct sach sach;

void nhap(sach *s){
	s->danhdau=0;
	printf("Nhap ten sach: ");
	gets(s->tensach);
	printf("Nhap ten tac gia: ");
	gets(s->tentg);
	printf("Nhap gia tien: ");
	scanf("%f",&s->giatien);
	getchar();
}

void chon1(int &n,char a[],sach s){
	int x;
	printf("\nNhap so luong sach ban muon them: ");
	scanf("%d",&x);
	getchar();
	for(int i=n;i<n+x;++i){
		printf("\nNhap thong tin thu %d: \n",i+1);
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b6.bin");
		f=fopen(a,"wb");
		s.ma=i+1;
		nhap(&s);
		fwrite(&s,sizeof(sach),1,f);
		fclose(f);		
	}
	n+=x;
}

void chon2(char a[],sach s){
	int x;
	printf("\nNhap ma sach ban muon sua: ");
	scanf("%d",&x);
	getchar();
	FILE *f;
	sprintf(a, "%d", x);
	strcat(a,"b6.bin");
	f=fopen(a,"wb");
	nhap(&s);
	s.ma=x;
	s.danhdau=1;
	fwrite(&s,sizeof(sach),1,f);
	fclose(f);
}

void chon4(int &n,char a[],sach s){
	printf("\n\nCac sach duoc thay doi: ");
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b6.bin");  
		f=fopen(a,"rb");
		fread(&s,sizeof(sach),1,f);
		if(s.danhdau==1) printf("\n%s ",s.tensach);
		fclose(f);
	}
	printf("\n");
	system("pause");
}

void chon5(int &n,char a[],sach s){
	sach ss[n];
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b6.bin");
		f=fopen(a,"rb");
		fread(&ss[i],sizeof(sach),1,f);
		fclose(f);
	}
	printf("\nDanh sach sau khi sap xep: \n");
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(ss[i].giatien>ss[j].giatien){
				sach t=ss[i];
				ss[i]=ss[j];
				ss[j]=t;
			}
		}
		printf("%d %s %.2f %s\n",ss[i].ma,ss[i].tensach,ss[i].giatien,ss[i].tentg);
	}
	system("pause");
}

int main(){
	sach s;
	int c,n=0;
	char a[100];
	while(1){
		system("cls");
		printf("\n\n   ==========MENU===========");
		printf("\n1.Nhap them thong tin. ");
		printf("\n2.Thay doi thong tin. ");
		printf("\n3.So sach duoc them. ");
		printf("\n4.Cac sach duoc sua. ");
		printf("\n5.In danh sach. ");
		printf("\n6.Ket thuc chuong trinh. ");
		printf("\n   ==========MENU===========");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1) chon1(n,a,s);
		else if(c==2) chon2(a,s);
		else if(c==3) {
			printf("\n\nSo luong sach duoc them: %d\n",n);
			system("pause");
		}
		else if(c==4) chon4(n,a,s);
		else if(c==5) chon5(n,a,s);
		else break;
	}		
}
