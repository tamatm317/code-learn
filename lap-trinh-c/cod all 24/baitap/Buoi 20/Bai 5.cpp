#include <stdio.h>

struct PHONG{
	char maphong[5],ten[31];
	double dongia;
	int sl, tinhtrang;
};

void nhap(PHONG &p){
	getchar();
	printf("Nhap ma phong: ");
	gets(p.maphong);
	printf("Nhap ten phong: ");
	gets(p.ten);
	printf("Nhap don gia thue: ");
	scanf("%lf",&p.dongia);
	printf("Nhap don so luong giuong: ");
	scanf("%d",&p.sl);
	printf("Nhap don tinh trang: ");
	scanf("%d",&p.tinhtrang);
}

void sapxep(PHONG p[],int n){
	printf("\n\n\n\t\t---------------Danh sach sau khi sap xep-----------------\n");
	printf("\n  STT\t|\tMa phong   |\tTen phong |\t Don gia    | So luong giuong |\tTinh trang\n");
	for(int i=1;i<=n;++i){\
		for(int j=i+1;j<=n;++j){
			if(p[j].dongia<p[i].dongia){
				PHONG x=p[i];
				p[i]=p[j];
				p[j]=x;
			}
		}
		printf("  %-5d\t|\t%-8s   |\t%-10s|\t%-12.2lf|\t     %-7d  |     %d\n",
		i,p[i].maphong,p[i].ten,p[i].dongia,p[i].sl,p[i].tinhtrang);
	}
	printf("\n\t\t-----------------------------------------------------------");
}

int main(){
	int n;
	printf("Nhap so luong phong: ");
	scanf("%d",&n);
	PHONG p[n+1];
	for(int i=1;i<=n;++i){
		printf("\nNhap thong tin phong thu %d:\n",i);
		nhap(p[i]);
	}
	printf("\n\n\t\t---------------Thong tin cac phong--------------------\n");
	printf("\n  STT\t|\tMa phong   |\tTen phong |\t Don gia    | So luong giuong |\tTinh trang\n");
	for(int i=1;i<=n;++i){
		printf("  %-5d\t|\t%-8s   |\t%-10s|\t%-12.2lf|\t     %-7d  |     %d\n",
		i,p[i].maphong,p[i].ten,p[i].dongia,p[i].sl,p[i].tinhtrang);
	}
	printf("\n\t\t-----------------------------------------------------------");
	
	printf("\n\n\n\t\t---------------------- Cac phong trong --------------------\n");
	printf("\n  STT\t|\tMa phong   |\tTen phong |\t Don gia    | So luong giuong |\tTinh trang\n");
	for(int i=1;i<=n;++i){
		if(p[i].tinhtrang) continue;
		printf("  %-5d\t|\t%-8s   |\t%-10s|\t%-12.2lf|\t     %-7d  |     %d\n",
		i,p[i].maphong,p[i].ten,p[i].dongia,p[i].sl,p[i].tinhtrang);
	}
	printf("\n\t\t-----------------------------------------------------------");
	
	int dem=0;
	for(int i=1;i<=n;++i){
		dem+=p[i].sl;
	}
	printf("\n\n\nKhach san co tong cong %d cai giuong.",dem);
	
	sapxep(p,n);
}

//5
//A1
//AAA
//320000
//1
//1
//B1
//BBB
//500000
//2
//0
//C1
//CCC
//1500000
//1
//1
//D1
//DDDD
//2300000
//4
//1
//E1
//EEE
//720000
//2
//1

