#include <stdio.h>
#include <stdlib.h>
int n;

struct MATHANG{
	char ten[21];
	int dg, sl;
};

void xuat(MATHANG mh[],int n){
	printf("\n  STT\t|\tTen mat hang\t |\tDon gia   |   So luong ton\n");
	for(int i=0;i<n;i++){
		printf("   %-5d|\t%-14s   |\t%-10d|\t%-12d\n"
		,i+1,mh[i].ten,mh[i].dg,mh[i].sl);
	}
	printf("\n\t------------------------------------------------------------\n");
}

void nhap(struct MATHANG &m){
	printf("Ten mat hang: ");
	getchar();
	gets(m.ten);
	printf("Don gia: ");
	scanf("%d",&m.dg);
	printf("So luong ton: ");
	scanf("%d",&m.sl);
}

void old(struct MATHANG m[]){
	int max=m[0].sl*m[0].dg;
	int tam=0;
	for(int i=0;i<n;i++){
		if(m[i].sl*m[i].dg>max) {
			tam=i;
			max=m[i].sl*m[i].dg;
		}
	}
	printf("\n\nMat hang co tong so luong nhieu nhat la: %s",m[tam].ten);
}

int tim(struct MATHANG m[]){
	int dem=0;
	for (int i=0;i<n;i++){
		if(m[i].sl>1000) dem++;
	}
	return dem;
}

int main(){
	scanf("%d",&n);
	struct MATHANG m[n];
	for(int i=0;i<n;i++){
		printf("\nNhap mat hang thu %d: \n",i+1);
		nhap(m[i]);
	}
	
	printf("\n\n\n\t-------------------- Danh sach cac mat hang ------------------\n");
	xuat(m,n);
	
	old(m);
	printf("\n\nSo luong mat hang con hon 1000 la: %d",tim(m));
	return 0;
}



//5
//Banh ngot
//120000
//999
//Keo ngot
//140324
//1021
//snack
//245134
//2111
//Banh bao
//321000
//123
//Keo deo
//120111
//1032
