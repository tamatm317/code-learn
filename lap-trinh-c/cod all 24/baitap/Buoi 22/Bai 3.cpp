#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct thietbi{
	int ma,danhdau;
	char ten[100];
	float nhap,baohanh;
};
//typedef struct thietbi thietbi;

void nhap(thietbi *tb){
	tb->danhdau=0;
	printf("Nhap ten: ");
	gets(tb->ten);
	printf("Nhap gia nhap va bao hanh: ");
	scanf("%f%f",&tb->nhap,&tb->baohanh);
	getchar();
}

void chon1(int &n,char a[],thietbi tb){
	int x;
	printf("\nNhap so luong san pham ban muon them: ");
	scanf("%d",&x);
	getchar();
	for(int i=n;i<n+x;++i){
		printf("\nNhap thong tin thu %d: \n",i+1);
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b3.bin");
		f=fopen(a,"wb");
		tb.ma=i+1;
		nhap(&tb);
		fwrite(&tb,sizeof(thietbi),1,f);
		fclose(f);		
	}
	n+=x;
}

void chon2(char a[],thietbi tb){
	int x;
	printf("\nNhap ma ban muon sua: ");
	scanf("%d",&x);
	getchar();
	FILE *f;
	sprintf(a, "%d", x);
	strcat(a,"b3.bin");
	f=fopen(a,"wb");
	nhap(&tb);
	tb.ma=x;
	tb.danhdau=1;
	fwrite(&tb,sizeof(thietbi),1,f);
	fclose(f);
}

void chon4(int &n,char a[],thietbi tb){
	printf("\n\nCac thong tin duoc thay doi: ");
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b3.bin");  
		f=fopen(a,"rb");
		fread(&tb,sizeof(thietbi),1,f);
		if(tb.danhdau==1) printf("\n%s ",tb.ten);
		fclose(f);
	}
	printf("\n");
	system("pause");
}

void chon5(int &n,char a[],thietbi tb){
	thietbi ss[n];
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,"b3.bin");
		f=fopen(a,"rb");
		fread(&ss[i],sizeof(thietbi),1,f);
		fclose(f);
	}
	printf("\nDanh sach sau khi sap xep: \n");
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(ss[i].nhap<ss[j].nhap){
				thietbi t=ss[i];
				ss[i]=ss[j];
				ss[j]=t;
			}
		}
		printf("%d %s %.2f %.2f\n",ss[i].ma,ss[i].ten,ss[i].nhap,ss[i].baohanh);
	}
	system("pause");
}

int main(){
	thietbi tb;
	int c,n=0;
	char a[100];
	while(1){
		system("cls");
		printf("\n\n   ==========MENU===========");
		printf("\n1.Nhap them thong tin. ");
		printf("\n2.Thay doi thong tin. ");
		printf("\n3.So thiet bi duoc them. ");
		printf("\n4.Cac thiet bi duoc sua. ");
		printf("\n5.In danh sach. ");
		printf("\n6.Ket thuc chuong trinh. ");
		printf("\n   ==========MENU===========");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1) chon1(n,a,tb);
		else if(c==2) chon2(a,tb);
		else if(c==3) {
			printf("\n\nSo luong san pham duoc them: %d\n",n);
			system("pause");
		}
		else if(c==4) chon4(n,a,tb);
		else if(c==5) chon5(n,a,tb);
		else break;
	}		
}


