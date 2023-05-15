#include <stdio.h>

struct xuatchieu{
	int gio,phut,giay;
};

struct ngayxem{
	int ngay,thang,nam;
};

struct phim{
	char ten[21];
	int giatien;
	xuatchieu xc;
	ngayxem nx;
};

void nhap(phim &p){
	printf("\nTen Phim: ");
	getchar();
	gets(p.ten);
	printf("Gia tien: ");
	scanf("%d",&p.giatien);
	printf("Xuat chieu (gio,phut,giay): ");
	scanf("%d%d%d",&p.xc.gio,&p.xc.phut,&p.xc.giay);
	printf("Ngay xem (Ngay,thang,nam): ");
	scanf("%d%d%d",&p.nx.ngay,&p.nx.thang,&p.nx.nam);
}

void tong(phim p[],int n){
	int t=0;
	for(int i=1;i<=n;++i){
		t+=p[i].giatien;
	}
	printf("\n\nTong gia tien cac ve xem phim: %d",t);
}

void doi(phim &x, phim &y){
	phim a=x;
	x=y;
	y=a;
}

int sapxepngay(phim p[], int n){
	for(int i=1;i<n;++i){
		for(int j=i+1;j<=n;++j){
			if(p[j].nx.nam>p[i].nx.nam){
				doi(p[j],p[i]);
			}else if(p[j].nx.nam==p[i].nx.nam&&p[j].nx.thang>p[i].nx.thang){
				doi(p[j],p[i]);
			}else if(p[j].nx.nam==p[i].nx.nam&&p[j].nx.thang==p[i].nx.thang&&p[j].nx.ngay>p[i].nx.ngay){
				doi(p[j],p[i]);
			}
		}
	}
}

int sapxepgio(phim p[], int n){
	for(int i=1;i<n;++i){
		for(int j=i+1;j<=n;++j){
			if(p[j].nx.ngay!=p[i].nx.ngay) break;
			if(p[j].xc.gio>p[i].xc.gio){
				doi(p[j],p[i]);
			}else if(p[j].xc.gio==p[i].xc.gio&&p[j].xc.phut>p[i].xc.phut){
				doi(p[j],p[i]);
			}else if(p[j].xc.gio==p[i].xc.gio&&p[j].xc.phut==p[i].xc.phut&&p[j].xc.giay>p[i].xc.giay){
				doi(p[j],p[i]);
			}
		}
	}
}

void xuat(phim p[],int n){
	printf("\n  STT\t|\tTen phim\t |\tGia tien   |\t Xuat chieu   |\tNgay xem\n");
	for(int i=1;i<=n;i++){
		printf("   %-5d|\t%-14s   |\t%-12d|\t%-2d - %-2d - %-2d  |\t%-2d/%-2d/%-4d\n"
		,i,p[i].ten,p[i].giatien,p[i].xc.gio,p[i].xc.phut,p[i].xc.giay,
		p[i].nx.ngay,p[i].nx.thang,p[i].nx.nam);
	}
	printf("\n\t------------------------------------------------------------\n");
}

int main(){
	int n;
	printf("Nhap so luon phim: ");
	scanf("%d",&n);
	phim p[n+1];
	for(int i=1;i<=n;++i){
		nhap(p[i]);
	}
	
	printf("\n\n\n\t---------------------- Danh sach cac phim --------------------\n");
	xuat(p,n);
	tong(p,n);
	sapxepngay(p,n);
	sapxepgio(p,n);
	printf("\n\n\n\t--------------- Danh sach cac phim sau khi sx ---------------\n");
	xuat(p,n);
}

//5
//A B C
//120000
//16 00 00
//16 5 2021
//D E F
//150000
//18 30 00
//17 5 2021
//G H K
//200000
//20 00 00
//17 5 2021
//J L M
//120000
//14 30 00
//16 5 2021
//D O P
//250000
//18 00 00
//18 5 2021
