#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct ngay{
	int ngay, thang, nam;
};

struct mathang {
	char nhanhieu[31];
	float trongluong;
	ngay n;
};

struct node {
	mathang data;
	node *next;
};

struct list {
	node *dau, *cuoi;
};

void khoitao(list &l) {
	l.dau=NULL;
	l.cuoi=NULL;
}

node* taonode(mathang x) {
	node *t=new node;
	t->next=NULL;
	t->data = x;
	return t;
}

void themvaodau(list &l,mathang x) {
	node *t=taonode(x);
	if(l.dau==NULL) {
		l.dau=l.cuoi=t;
	} else {
		t->next=l.dau;
		l.dau=t;
	}
}

void themvaocuoi(list &l,mathang x) {
	node *t=taonode(x);
	if(l.dau==NULL) {
		l.dau=l.cuoi=t;
	} else {
		l.cuoi->next=t;
		l.cuoi=t;
	}
}

void themvaovitribk(list &l,mathang x, int i) {
	node *t=taonode(x);
	if(i==1) themvaodau(l,x);
	int h=1;
	node *k=l.dau;
	while(h<i-1){
		k=k->next;
		++h;
	}
	node *tam=k->next;
	k->next = t;
	t->next =tam;
}

void xoadau(list &l) {
	if(l.dau==NULL) return;
	node *t=l.dau;
	l.dau=l.dau->next;
	delete t;
}

void xoacuoi(list &l) {
	if(l.dau==NULL) return;
	else if(l.dau->next==NULL) {
		xoadau(l);
		return;
	}
	node *t=l.dau;
	for(node *k=l.dau; k!=NULL; k=k->next) {
		if(k->next==l.cuoi) {
			delete l.cuoi;
			l.cuoi=k;
			k->next=NULL;
		}
	}
}


void xoavitribk(list &l,int i) {
	if(i==1) xoadau(l);
	int h=1;
	node *k=l.dau;
	while(h<i-1){
		k=k->next;
		++h;
	}
	node *tam=k->next;
	k->next = tam->next;
	delete tam;
}

void nhapsv(mathang *x) {
	printf("Nhap nhan hieu: ");
	gets(x->nhanhieu);
	printf("Nhap trong luong: ");
	scanf("%f",&x->trongluong);
	getchar();
	printf("Nhap han su dung: ");
	char c;
	scanf("%d%c%d%c%d",&x->n.ngay,&c,&x->n.thang,&c,&x->n.nam);
	getchar();
}

void xuatsv(mathang x) {
	printf("  %-13s |   %-12.3f|   %-2d/%-2d/%-4d\n"
	,x.nhanhieu,x.trongluong,x.n.ngay,x.n.thang,x.n.nam);
}

void xuat(list l) {
	printf("\n==============================================\n");
	printf("  Nhan hieu     |  Trong luong  |     HXD\n");
	for(node *k=l.dau; k!=NULL; k=k->next) {
		xuatsv(k->data);
	}
	printf("==============================================\n");
}

void tim(list l, char a[]) {
	for(node *k=l.dau; k!=NULL; k=k->next) {
		if(strstr(k->data.nhanhieu,a))
			xuatsv(k->data);
	}
}

void sapxepnam(list &l){
	for(node *k=l.dau;k!=NULL;k=k->next){
		for(node *h=k->next;h!=NULL;h=h->next){
			if(h->data.n.nam>k->data.n.nam){
				mathang m=h->data;
				h->data=k->data;
				k->data=m;
			}
		}
	}
}

void sapxepthang(list &l){
	for(node *k=l.dau;k!=NULL;k=k->next){
		for(node *h=k->next;h!=NULL;h=h->next){
			if(h->data.n.nam!=k->data.n.nam) break;
			if(h->data.n.thang>k->data.n.thang){
				mathang m=h->data;
				h->data=k->data;
				k->data=m;
			}
		}
	}
}

void sapxepngay(list &l){
	for(node *k=l.dau;k!=NULL;k=k->next){
		for(node *h=k->next;h!=NULL;h=h->next){
			if(h->data.n.nam!=k->data.n.nam) break;
			if(h->data.n.thang!=k->data.n.thang) break;
			if(h->data.n.ngay>k->data.n.ngay){
				mathang m=h->data;
				h->data=k->data;
				k->data=m;
			}
		}
	}
}

void sapxep(list &l){
	sapxepnam(l);
	sapxepthang(l);
	sapxepngay(l);
} 

void menu(list &l) {
	int c;
	while(1) {
		system("cls");
		printf("\n\n  =========== MENU ============");
		printf("\n\t1. Them vao dau! ");
		printf("\n\t2. Them vao cuoi! ");
		printf("\n\t3. Them vao bat ki! ");
		printf("\n\t4. Xuat danh sach!");
		printf("\n\t5. Xoa dau!");
		printf("\n\t6. Xoa cuoi!");
		printf("\n\t7. Xoa vao bat ki! ");
		printf("\n\t8. Tim nhan hieu! ");
		printf("\n\t9. Sap xep! ");
		printf("\n\t0. Ket thuc!");
		printf("\n  =============================");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1) {
			mathang x;
			nhapsv(&x);
			themvaodau(l,x);
		} else if(c==2) {
			mathang x;
			nhapsv(&x);
			themvaocuoi(l,x);
		} else if(c==3) {
			int t;
			printf("\nNhap vi tri muon them: ");
			scanf("%d",&t);
			getchar();
			mathang x;
			nhapsv(&x);
			themvaovitribk(l,x,t);
		} else if(c==4) {
			xuat(l);
			system("pause");
		} else if(c==5) {
			xoadau(l);
		} else if(c==6) {
			xoacuoi(l);
		} else if(c==7) {
			int t;
			printf("\nNhap vi tri muon xoa: ");
			scanf("%d",&t);
			getchar();
			xoavitribk(l,t);
		} else if(c==8) {
			char t[100];
			printf("\nNhap nhan hieu muon tim: ");
			gets(t);
			tim(l,t);
			system("pause");
		} else if(c==9) {
			sapxep(l);
			printf("\nDanh sach sau khi sap xep: \n");
			xuat(l);
			system("pause");
		} else break;
	}
}

int main() {
	list l;
	khoitao(l);
	menu(l);
	return 0;
}


//1
//Coca cola
//1234
//12/8/2021
//1
//pepsi
//123
//5/9/2000
//2
//A X
//6465
//6/9/2019
//3
//2
//Keo ngot
//654
//11/8/2021
//2
//Banh trang
//6546
//6/9/2000
//2
//Banh gao
//3213
//6/3/2019
//9

