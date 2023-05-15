#include<stdio.h>
#include<stdlib.h> // cls;
#include<string.h>
struct sinh_vien {
	long long id;
	char ten[50], lop[20], dia_chi[100];
	float GPA;
};

void nhap_1_sinh_vien(sinh_vien &sv){
	printf("Nhap ten: "); gets(sv.ten);
	printf("Nhap id: "); scanf("%lld",&sv.id);
	getchar();
	printf("Nhap lop: "); gets(sv.lop);
	printf("Nhap GPA: "); scanf("%f",&sv.GPA);
	getchar();
	printf("Nhap dia chi: "); gets(sv.dia_chi);
}
void nhap_danh_sach_sv(sinh_vien sv[], int n){ // truyen vao mang sinh vien
	for(int i = 0; i<n; ++i){
		printf("\nNhap thong tin sinhg vien thu %d\n", i+1);
		nhap_1_sinh_vien(sv[i]);
	}
}
void xuat_1_sinh_vien(sinh_vien &sv){
	printf("\n|  %-20s  |  %-10lld  |  %-10s  | %-8.2f  | %-14s|",
			sv.ten,sv.id,sv.lop,sv.GPA,sv.dia_chi);
}
void xuat_danh_sach_sv(sinh_vien sv[], int n){
	printf("\n|  \t  Ho va ten      |      Id      |      Lop     |    GPA    |\tDia chi\t   |");
	printf("\n+------------------------+--------------+--------------+-----------+---------------+");
	for(int i=0;i<n;++i){
		xuat_1_sinh_vien(sv[i]);
	}
	printf("\n+----------------------------------------------------------------------------------+\n");
}
void tim_kiem_sv(sinh_vien sv[], int n){
	char name[100];
	printf("Hay nhap ten can tim kiem: ");
	gets(name);
	printf("\n+--------------------------------- Danh sach tim thay -----------------------------+");
	printf("\n|  \t  Ho va ten      |      Id      |      Lop     |    GPA    |\tDia chi\t   |");
	printf("\n+------------------------+--------------+--------------+-----------+---------------+");
	for(int i = 0; i<n; ++i){
		if(strstr(sv[i].ten,name)){
			xuat_1_sinh_vien(sv[i]);
		}
	}

}
void kiem_tra_gpa(sinh_vien &sv){
	if(sv.GPA>=2.5) printf("\n|  %-20s  |  %-10lld  |  %-10s  | %-8.2f  | %-14s|",
			sv.ten,sv.id,sv.lop,sv.GPA,sv.dia_chi);
}
void gpa_tren_2_5(sinh_vien sv[], int n){
	printf("Cac sinh vien co GPA >= 2.5: ");
	printf("\n|  \t  Ho va ten      |      Id      |      Lop     |    GPA    |\tDia chi\t   |");
	printf("\n+------------------------+--------------+--------------+-----------+---------------+");
	for(int i = 0; i<n; ++i){
		kiem_tra_gpa(sv[i]);
	}
	printf("\n+----------------------------------------------------------------------------------+\n");
}
void sap_xep_sinh_vien_theo_gpa(sinh_vien sv[], int n){
	printf("+----------------------- Danh sach sinh vien sau khi sap xep ----------------------+");
	printf("\n|  \t  Ho va ten      |      Id      |      Lop     |    GPA    |\tDia chi\t   |");
	printf("\n+------------------------+--------------+--------------+-----------+---------------+");

	for(int i =0; i<n; ++i){
		for(int j = i+1; j<n;++j){
			if(sv[j].GPA>sv[i].GPA){
				sinh_vien tmp = sv[j];
				sv[j] = sv[i];
				sv[i] = tmp;
			}
		}
		xuat_1_sinh_vien(sv[i]);
	}
	printf("\n+----------------------------------------------------------------------------------+\n");

}
int main(){
	int so_luong_sinh_vien, c;
	printf("Hay nhap so luong sinh vien: ");
	scanf("%d",&so_luong_sinh_vien);
	getchar(); // do co ten=, lop, li tu
	sinh_vien sv[so_luong_sinh_vien];
	while(1){
		system("cls");
		printf("+-------------------MENU----------------------+");
		printf("\n   |    1.Nhap danh sach sinh vien         |");
		printf("\n   |    2.Xuat danh sach sinh vien         |");
		printf("\n   |    3.Tim kiem sinh vien               |");
		printf("\n   |    4.Cac sinh vien co GPA >= 2.5      |");
		printf("\n   |    5.Sap xep sinh vien theo GPA       |");
		printf("\n   |    0.Ket thuc                         |");
		printf("\n+--------------------------------------------+");
		printf("\nVui long chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1){
			nhap_danh_sach_sv(sv,so_luong_sinh_vien);
		}else if(c==2){
			xuat_danh_sach_sv(sv,so_luong_sinh_vien);
			system("pause");
		}else if(c==3){
			tim_kiem_sv(sv,so_luong_sinh_vien);
			system("pause");
		}else if(c==4){
			gpa_tren_2_5(sv,so_luong_sinh_vien);
			system("pause");		
		}else if(c==5){
			sap_xep_sinh_vien_theo_gpa(sv,so_luong_sinh_vien);
			system("pause");
		}else if(c==0){
			printf("\nChuong trinh ket thuc.");
			break;
		}else{
			printf("\nSo vua nhap khong hop le, vui long nhap lai: ");
			system("pause");
		}
	}
	
}

// system("cls");
// 		printf("      +------------- Menu ----------------+");
// 		printf("\n    |   1.Nhap danh sach sinh vien      |");
// 		printf("\n    |   2.Xuat danh sach sinh vien      |");
// 		printf("\n    |   3.Tim kiem sinh vien            |");
// 		printf("\n    |   4.Cac sinh vien co GPA >=2.5    |");
// 		printf("\n    |   5.Sap xep sinh vien theo GPA    |");
// 		printf("\n    |   0.Thoat                         |");
// 		printf("\n    +-----------------------------------+");
// 		printf("\n\nBan chon so: ");
// 		scanf("%d",&c);
// 		getchar();
// 		if(c==1){
			
// 		}else if(c==2){
			
// 		}else if(c==0){
// 			printf("\nChuong trinh ket thuc!\n");
// 			break;
// 		}else if(c==3){

// 		}else if(c==4){

// 		}else if(c==5){

// 		}else{
// 			printf("\nSo ban chon khong thoa man\n");
// 			//tam dung
// 			system("pause");
// 		}
// 	}
