#include <stdio.h>
#include <ctime>

struct ngaysinh{
	int ngay,thang,nam;
};

struct nhanvien{
	char ht[31];
	ngaysinh ns;
	double luong;
	int gioitinh;
};

void nhap(nhanvien &a){
	printf("Nhap ten: ");
	gets(a.ht);
	printf("Nhap ngay thang nam sinh: ");
	scanf("%d%d%d",&a.ns.ngay,&a.ns.thang,&a.ns.nam);
	printf("Nhap luong: ");
	scanf("%lf",&a.luong);
	printf("Nhap gioi tinh: ");
	scanf("%d",&a.gioitinh);
	getchar();
}

void xuat(nhanvien nv[],int n){
	printf("\n  STT\t|\tHo ten\t   |\tNgay sinh\t|\tLuong\t  |\tGioi tinh\n");
	for(int i=1;i<=n;++i){
		printf("   %-5d|   %-15s|\t%-2d/%-2d/%-10d|  %-15lf|\t   %d\n",
		i,nv[i].ht,nv[i].ns.ngay,nv[i].ns.thang,nv[i].ns.nam,nv[i].luong,nv[i].gioitinh);
	}
	printf("\n\t\t-----------------------------------------------------------");
}

void sapxep(nhanvien a[],int n){
	for(int i=1;i<=n;++i){
		int vt=i,max=a[i].ns.nam;
		for(int j=i+1;j<=n;++j){
			if(a[j].ns.nam>max) {
				vt=j;
				max=a[j].ns.nam;
			}
		}
		nhanvien c=a[i];
		a[i]=a[vt];
		a[vt]=c;
	}
}

int main(){
	int n;
	printf("Nhap so luong nhan vien: ");
	scanf("%d",&n);
	getchar();
	nhanvien nv[n+1];
	for(int i=1;i<=n;++i){
		printf("\nNhap thong tin nhan vien thu %d:\n",i);
		nhap(nv[i]);
	}
	printf("\n\n\t\t---------------Thong tin cac nhan vien--------------------\n");
	xuat(nv,n);
	
	time_t now=time(0);
	tm *ltm = localtime(&now);
	printf("\n\nCac nhan vien tren 40 tuoi:\n");
	for(int i=1;i<=n;++i){
		if(1900 + ltm->tm_year-nv[i].ns.nam>40){
			printf("\t%s\n",nv[i].ht);
		}
	}
	
	int dem=0;
	for(int i=1;i<=n;++i){
		if(nv[i].luong>1000000.0){
			dem++;
		}
	}
	printf("\n\nCo %d nhan vien co luong tren 1.000.000",dem);
	
	sapxep(nv,n);
	printf("\n\n\t\t------------- Danh sach nhan vien sap xep ------------------\n");
	xuat(nv,n);
}

//5
//Nguyen A
//24 5 1998
//123123.123
//1
//Nguyen Thi B
//1 1 1980
//213321.2
//0
//Nguyen Van C
//12 12 1972
//154623.123
//1
//Doan Nguyen Van D
//15 1 1985
//2800321.2
//0
//Trinh Thi D
//28 5 1988
//1800321.2
//0
