#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien{
	int id,khoanmuc,tien,danhdau;
	char ten[100];
};
//typedef struct sinhvien sinhvien;

void nhap(sinhvien *sv){
	sv->danhdau=0;
	printf("\nNhap khoan muc: ");
	scanf("%d",&sv->khoanmuc);
	getchar();
	printf("Nhap ten: ");
	gets(sv->ten);
	printf("Nhap gia tien: ");
	scanf("%d",&sv->tien);
	getchar();
}

void chon1(int &n,char a[],sinhvien sv){
	int x;
	printf("\nNhap so luong thong tin ban muon them: ");
	scanf("%d",&x);
	getchar();
	for(int i=n;i<n+x;++i){
		printf("\nNhap thong tin thu %d: ",i+1);
		FILE *f;
		sprintf(a, "%d", i+1);  //chuyen int sang chuoi
		strcat(a,".bin");
		f=fopen(a,"wb");
		sv.id=i+1;
		nhap(&sv);
		fwrite(&sv,sizeof(sinhvien),1,f);
		fclose(f);		
	}
	n+=x;
}

void chon2(char a[],sinhvien sv){
	int x;
	printf("\nNhap ma ban muon sua: ");
	scanf("%d",&x);
	getchar();
	FILE *f;
	sprintf(a, "%d", x);
	strcat(a,".bin");
	f=fopen(a,"wb");
	nhap(&sv);
	sv.danhdau=1;
	sv.id=x;
	fwrite(&sv,sizeof(sinhvien),1,f);
	fclose(f);
}

void chon3(int &n,char a[],sinhvien sv){
	int demt=0,demc=0;
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,".bin"); 
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		if(sv.khoanmuc==1) demt++;
		else demc++;
		fclose(f);
	}
	printf("\n\nSo luong thu: %d,chi: %d\n",demt,demc);
	system("pause");
}

void chon4(int &n,char a[],sinhvien sv){
	printf("\n\nCac thong tin duoc thay doi: ");
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,".bin");  
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		if(sv.danhdau==1) printf("\n%s ",sv.ten);
		fclose(f);
	}
	printf("\n");
	system("pause");
}

void chon5(int &n,char a[],sinhvien sv){
	int demt=0,demc=0;
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,".bin"); 
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		if(sv.khoanmuc==1) demt+=sv.tien;
		else demc+=sv.tien;
		fclose(f);
	}
	printf("\nThu: %d\nChi: %d\nTiet kiem: %d\n",demt,demc,demt-demc);
	system("pause");
}

void chon6(int &n,char a[],sinhvien sv){
	for(int i=0;i<n;++i){
		FILE *f;
		sprintf(a, "%d", i+1); 
		strcat(a,".bin");
		f=fopen(a,"rb");
		fread(&sv,sizeof(sinhvien),1,f);
		printf("%d %s %d %d %d\n",sv.id,sv.ten,sv.khoanmuc,sv.tien, sv.danhdau);
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
		printf("\n1.Nhap them thong tin. ");
		printf("\n2.Thay doi thong tin. ");
		printf("\n3.So luong thu chi. ");
		printf("\n4.Cac thong tin da thay doi. ");
		printf("\n5.Thong tin tinh toan. ");
		printf("\n6.Kiem tra cac file. ");
		printf("\n7.Ket thuc chuong trinh. ");
		printf("\n   ==========MENU===========");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1) chon1(n,a,sv);
		else if(c==2) chon2(a,sv);
		else if(c==3) chon3(n,a,sv);
		else if(c==4) chon4(n,a,sv);
		else if(c==5) chon5(n,a,sv);
		else if(c==6) chon6(n,a,sv);
		else break;
	}		
}


//1
//3
//1
//luong
//10000
//2
//tien nha
//5000
//1
//thuong
//1000
//2
//3
//2
//tien an
//2000
//5


