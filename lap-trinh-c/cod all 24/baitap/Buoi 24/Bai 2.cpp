#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct sinhvien {
	char ten[31];
	float toan, van, tb;
};

struct node {
	sinhvien data;
	node *next;
};

struct list {
	node *dau, *cuoi;
};

void khoitao(list &l) {
	l.dau=NULL;
	l.cuoi=NULL;
}

node* taonode(sinhvien x) {
	node *t=new node;
	t->next=NULL;
	t->data = x;
	return t;
}

void themvaodau(list &l,sinhvien x) {
	node *t=taonode(x);
	if(l.dau==NULL) {
		l.dau=l.cuoi=t;
	} else {
		t->next=l.dau;
		l.dau=t;
	}
}

void themvaocuoi(list &l,sinhvien x) {
	node *t=taonode(x);
	if(l.dau==NULL) {
		l.dau=l.cuoi=t;
	} else {
		l.cuoi->next=t;
		l.cuoi=t;
	}
}

void themvaovitribk(list &l,sinhvien x, int i) {
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

void nhapsv(sinhvien *x) {
	printf("Nhap ten: ");
	gets(x->ten);
	printf("Nhap diem mon toan: ");
	scanf("%f",&x->toan);
	getchar();
	printf("Nhap diem mon van: ");
	scanf("%f",&x->van);
	getchar();
	x->tb=(x->toan+x->van)/2;
}

void xuatsv(sinhvien x) {
	printf("  %-13s |   %-5.3f   |   %-5.3f  |   %-5.3f\n",x.ten,x.toan,x.van,x.tb);
}

void xuat(list l) {
	printf("\tTen\t| Diem toan | Diem van | Diem tb\n");
	for(node *k=l.dau; k!=NULL; k=k->next) {
		xuatsv(k->data);
	}
}

void tim(list l, char a[]) {
	for(node *k=l.dau; k!=NULL; k=k->next) {
		if(strstr(k->data.ten,a))
			xuatsv(k->data);
	}
}

void sapxep(list &l){
	list l1, l2;
	khoitao(l1);
	khoitao(l2);
	if(l.dau==l.cuoi) return;
	node *t=l.dau,*p;
	l.dau=l.dau->next;
	t->next=NULL;
	while(l.dau!=NULL){
		p=l.dau;
		l.dau=l.dau->next;
		p->next=NULL;
		if(p->data.tb>=t->data.tb)
			themvaodau(l1,p->data);
		else themvaodau(l2,p->data);
	}
	sapxep(l1);
	sapxep(l2);
	if(l1.dau!=NULL){
		l.dau=l1.dau;
		l1.cuoi->next=t;
	}else l.dau=t;
	t->next=l2.dau;
	if(l2.dau!=NULL) l.cuoi=l2.cuoi;
	else l.cuoi=t;
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
		printf("\n\t8. Tim ten! ");
		printf("\n\t9. Sap xep! ");
		printf("\n\t0. Ket thuc!");
		printf("\n  =============================");
		printf("\n\nBan chon so: ");
		scanf("%d",&c);
		getchar();
		if(c==1) {
			sinhvien x;
			nhapsv(&x);
			themvaodau(l,x);
		} else if(c==2) {
			sinhvien x;
			nhapsv(&x);
			themvaocuoi(l,x);
		} else if(c==3) {
			int t;
			printf("\nNhap vi tri muon them: ");
			scanf("%d",&t);
			getchar();
			sinhvien x;
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
			printf("\nNhap ten muon tim: ");
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
//Nguyen Van A
//8
//9
//1
//Le Thi B
//6
//9
//2
//Doan C
//6
//5
