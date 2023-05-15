#include <stdio.h>
#include <stdlib.h>
int n;

struct tinh{
	char ten[30];
	double dt;
	long long ds;
};

void nhap(struct tinh &t){
	printf("Ten: ");
	gets(t.ten);
	printf("Dien tich: ");
	scanf("%lf",&t.dt);
	printf("So dan: ");
	scanf("%lld",&t.ds);
	getchar();
}

float dtb(struct tinh t[]){
	float tong=0;
	for(int i=0;i<n;i++){
		tong+=t[i].dt;
	}
	return tong;
}

void dtmax(struct tinh t[]){
	float max=t[0].dt;
	int tam=0;
	for(int i=0;i<n;i++){
		if(t[i].dt>max) {
			tam=i;
			max=t[i].dt;
		}
	}
	printf("\n\nTinh co dien tich lon nhat la: %s",t[tam].ten);
}

void sx(struct tinh t[]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(t[j].dt<t[i].dt){
				struct tinh l=t[i];
				t[i]=t[j];
				t[j]=l;
			}
		}
	}
	printf("\n\n\n\t------------------- Danh sach sx theo dien tinh --------------\n");
	printf("\n  STT\t|\tTen tinh\t |\tDien tich   |\t Dan so\n");
	for(int i=0;i<n;i++){
		printf("   %-5d|\t%-14s   |\t%-12.3lf|\t%lld\n",i+1,t[i].ten,t[i].dt,t[i].ds);
	}
	printf("\n\t------------------------------------------------------------\n");
}

void dsmax(struct tinh t[]){
	int max=t[0].ds;
	int tam=0;
	for(int i=0;i<n;i++){
		if(t[i].ds>max) {
			tam=i;
			max=t[i].ds;
		}
	}
	printf("\n\nTinh co dan so lon nhat la: %s",t[tam].ten);
}

int main(){
	printf("Nhap so luong tinh: ");
	scanf("%d",&n);
	getchar();
	struct tinh t[n];
	for(int i=0;i<n;i++){
		printf("\nNhap tinh thu %d: \n",i+1);
		nhap(t[i]);
	}
	printf("\n\n\n\t---------------------- Danh sach cac tinh --------------------\n");
	printf("\n  STT\t|\tTen tinh\t |\tDien tich   |\t Dan so\n");
	for(int i=0;i<n;i++){
		printf("   %-5d|\t%-14s   |\t%-12.3lf|\t%lld\n",i+1,t[i].ten,t[i].dt,t[i].ds);
	}
	printf("\n\t------------------------------------------------------------\n");
	printf("\n\nTong dien tich cac tinh la: %.3f",dtb(t));
	dtmax(t);
	dsmax(t);
	sx(t);
	return 0;
}

//5
//Long An
//160000
//120000
//Binh Dinh
//800000
//654000
//Khanh Hoa
//1234567
//85200000
//Da Nang
//5245500
//9550000
//Nam Dinh
//2140000
//900000
