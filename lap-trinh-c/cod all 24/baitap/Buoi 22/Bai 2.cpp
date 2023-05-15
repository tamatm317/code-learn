#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sanpham{
	int ma,danhdau;
	char ten[100];
	float nhap,xuat;
};
//typedef struct sanpham sanpham;

void nhap(sanpham *sp){
	sp->danhdau=0;
	printf("Nhap ten: ");
	gets(sp->ten);
	printf("Nhap gia nhap xuat: ");
	scanf("%f%f",&sp->nhap,&sp->xuat);
	getchar();
}

void chon1(int &n,char a[],sanpham sp){
	int x;
	printf("\nNhap so luong san pham ban muon them: ");
	scanf("%d",&x);
	getchar();
	for(int i=n;i<n+x;++i){
		printf("\nNhap thong tin thu %d: \n",i+1);
		FILE *f;
		sprintf(a, "%d", i+1);
		strcat(a,"b2.bin");
		f=fopen(a,"wb");
		sp.ma=i+1;
		nhap(&sp);
		fwrite(&sp,sizeof(sanpham),1,f);
		fclose(f);		
	}
	n+=x;
}

void chon2(char a[],sanpham sp){
	int x;
	printf("\nNhap ma ban muon sua: ");
	scanf("%d",&x);
	getchar();
	FILE *f;
	sprintf(a, "%d", x);
	strcat(a,"b2.bin");
	f=fopen(a,"wb");
	nhap(&sp);
	sp.danhdau=1;
	sp.ma=x;
	fwrite(&sp,sizeof(sanpham),1,f);
	fclose(f);
}

void chon4(int &n,char a[],sanpham sp){
	printf("\n\nCac thong tin duoc thay doi: ");
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b2.bin");  
		f=fopen(a,"rb");
		fread(&sp,sizeof(sanpham),1,f);
		if(sp.danhdau==1) printf("\n%s ",sp.ten);
		fclose(f);
	}
	printf("\n");
	system("pause");
}

void chon5(int &n,char a[],sanpham sp){
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b2.bin");
		f=fopen(a,"rb");
		fread(&sp,sizeof(sanpham),1,f);
		if(sp.nhap<sp.xuat)
			printf("%d %s %.2f %.2f\n",sp.ma,sp.ten,sp.nhap,sp.xuat);
		fclose(f);
	}
	system("pause");
}

void chon6(int &n,char a[],sanpham sp){
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b2.bin");
		f=fopen(a,"rb");
		fread(&sp,sizeof(sanpham),1,f);
		printf("%d %s %.2f %.2f\n",sp.ma,sp.ten,sp.nhap,sp.xuat);
		fclose(f);
	}
	system("pause");
}

int main(){
	sanpham sp;
	int c,n=0;
	char a[100];
	while(1){
		system("cls");   //xoa man hinh
		printf("\n\n   ==========MENU===========");
		printf("\n1.Nhap them thong tin. ");
		printf("\n2.Thay doi thong tin. ");
		printf("\n3.So san pham duoc them. ");
		printf("\n4.Cac san pham duoc sua. ");
		printf("\n5.Cac san pham co lai. ");
		printf("\n6.Kiem tra cac file. ");
		printf("\n7.Ket thuc chuong trinh. ");
		printf("\n   ==========MENU===========");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1) chon1(n,a,sp);
		else if(c==2) chon2(a,sp);
		else if(c==3) {
			printf("\n\nSo luong san pham duoc them: %d\n",n);
			system("pause");
		}
		else if(c==4) chon4(n,a,sp);
		else if(c==5) chon5(n,a,sp);
		else if(c==6) chon6(n,a,sp);
		else break;
	}		
}

//1
//2
//banh ngot
//5.50 8.50
//nuoc ngot
//4.50 6.50
//
//2
//2
//nuoc giai khat
//2.50 5.50
