#include <stdio.h>
int n;

struct hocsinh{
	char ten[31];
	float toan, van,dtb;
};

void nhap(hocsinh &hs){
	printf("Ten: ");
	gets(hs.ten);
	printf("Diem toan: ");
	scanf("%f",&hs.toan);
	printf("Diem van: ");
	scanf("%f",&hs.van); 
	getchar();
	hs.dtb=(hs.toan+hs.van)/2;
}

void dtb(struct hocsinh hs[]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(hs[j].dtb>hs[i].dtb){
				hocsinh l=hs[i];
				hs[i]=hs[j];
				hs[j]=l;
			}
		}
	}
}

void xuat (hocsinh hs[],int n){
	printf("\n  STT\t|\tHo ten\t   |  Diem toan  |  Diem van   |     DTB\n");
	for(int i=0;i<n;i++){
		printf("   %-5d|   %-15s|     %-8.2f|     %-8.2f|     %-8.2f\n",
		i+1,hs[i].ten,hs[i].toan,hs[i].van,hs[i].dtb);
	}
	printf("\n   ----------------------------------------------------------\n");
}

int main(){
	printf("Nhap so luong hoc sinh: ");
	scanf("%d",&n);     //so luong hoc sinh
	getchar();
	hocsinh hs[n];      //tao mang
	for(int i=0;i<n;i++){
		printf("\nNhap sinh vien thu %d: \n",i+1);
		nhap(hs[i]);
	}
	printf("\n\n   ---------------Thong tin cac hoc sinh---------------------\n");
	xuat(hs,n);
	
	
	printf("\n\n   ------------- Cac hoc sinh co diem trung binh <5 -------------\n");
	printf("\n  STT\t|\tHo ten\t   |  Diem toan  |  Diem van   |     DTB\n");
	for(int i=0;i<n;i++){
		if(hs[i].toan<5) 
		printf("   %-5d|   %-15s|     %-8.2f|     %-8.2f|     %-8.2f\n",
		i+1,hs[i].ten,hs[i].toan,hs[i].van,hs[i].dtb);
	}
	printf("\n   ----------------------------------------------------------\n");
	
	int dem=0;
	for(int i=0;i<n;i++){
		if(hs[i].toan>8&&hs[i].van>8) dem++;
	}
	printf("\n\nSo luong cac hoc sinh co diem toan va van >8: %d\n",dem);
	
	
	printf("\n   ----------------------------------------------------------\n");
	printf("\n\n   --------------- Danh sach theo dtb ---------------\n");
	dtb(hs);
	xuat(hs,n);
	return 0;
}


//5
//Nguyen Van A
//9
//8
//Le Thi B
//6.9
//7
//Doan C
//8.6
//9
//Le D
//10
//9.5
//Huynh E
//4
//3

