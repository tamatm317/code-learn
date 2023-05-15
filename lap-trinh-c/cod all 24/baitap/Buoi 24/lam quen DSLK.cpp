#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	node *next;
};

struct list{
	node *dau;
	node *cuoi;
};



void khoitao(list &l){
	l.cuoi=NULL;
	l.dau=NULL;
}

node *taonode(int x){
	node *t=(node *)malloc(sizeof(node));
	t->data=x;
	t->next=NULL;
	return t;
}




void themvaodau(list &l, node *t){
	if(l.dau==NULL){
		l.dau=t;
		l.cuoi=t;
	}else{
		t->next=l.dau;
		l.dau=t;
	}
}


void themvaocuoi(list &l, node *t){
	if(l.dau==NULL){
		l.dau=t;
		l.cuoi=t;
	}else{
		l.cuoi->next=t;
		l.cuoi=t;
	}
}

void themvaobk(list &l, node *t,int x){
	int dem=1;
	node *k=l.dau;
	if(x==1) {
		themvaodau(l,t);
		return;
	}
	while(dem<x-1&&k!=NULL){
		++dem;
		k=k->next;
	}
	t->next=k->next;
	k->next=t;
}

void themsau(list &l, int t,int x){
	for(node *k=l.dau;k!=NULL;k=k->next){
		if(k->data==x){
			node *g=taonode(t);
			g->next=k->next;
			k->next=g;
		}
	}
}

void xuat(list l){
	for(node *k=l.dau;k!=NULL;k=k->next){
		printf("%d ",k->data);
	}
}

void themtruoc(list &l, int t,int x){
	node *h=l.dau;
	if(l.dau->data==x){
		node *g=taonode(t);
		themvaodau(l,g);
		h=l.dau->next;
	}
	for(node *k=h->next;k!=NULL;k=k->next){
		if(k->data==x){
			node *g=taonode(t);
			h->next=g;
			g->next=k;
		}
		h=k;
	}
}

void xoadau(list &l){
	if(l.dau==NULL){
		return;
	}else{
		node *t=l.dau;
		l.dau=l.dau->next;
		delete t;
	}
}

void xoacuoi(list &l){
	node *k=l.dau;
	while(k->next->next!=NULL){
		k=k->next;
	}
	k->next=NULL;
	l.cuoi=k;
}

void xoabk(list &l,int x){
	int dem=1;
	node *k=l.dau;
	if(x==1) {
		xoadau(l);
		return;
	}
	while(dem<x-1&&k!=NULL){
		++dem;
		k=k->next;
	}
	node *t=k->next;
	k->next=t->next;
	delete t;
}

void xoatruoc(list &l,int x){
	if(l.dau->next->data==x) xoadau(l);
	node *h=l.dau;
	for(node *k=l.dau;k->next!=NULL;k=k->next){
		if(k->next->data==x){
			node *g=k;
			h->next=k->next;
			delete g;
			k=h;
		}
		h=k;
	}
}

void xoasau(list &l,int x){
	for(node *k=l.dau;k->next!=NULL;k=k->next){
		if(k->data==x){
			node *g=k->next;
			k->next=g->next;
		}
	}
}

int main(){
	list l;
	khoitao(l);
	int x;
	while(1){
		system("cls");
		printf("\n0. Ket thuc!");
		printf("\n1. Them vao dau ");
		printf("\n2. Them vao cuoi ");
		printf("\n3. Them vao bat ki ");
		printf("\n4. Them truoc ");
		printf("\n5. Them sau");
		printf("\n6. Xoa dau ");
		printf("\n7. Xoa cuoi ");
		printf("\n8. Xoa bat ki ");
		printf("\n9. Xoa truoc");
		printf("\n10. Xoa sau ");    
		printf("\n11. Xuat");
		printf("\n\nBan cho so: ");
		scanf("%d",&x);
		if(x==1){
			int n;
			printf("\nNhap so ban muon them: ");
			scanf("%d",&n);
			node *t=taonode(n);
			themvaodau(l,t);
		}else if(x==2){
			int n;
			printf("\nNhap so ban muon them: ");
			scanf("%d",&n);
			node *t=taonode(n);
			themvaocuoi(l,t);
		}else if(x==3){
			int n,x;
			printf("\nNhap so ban muon them: ");
			scanf("%d",&n);
			printf("\nNhap vi tri ban muon them: ");
			scanf("%d",&x);
			node *t=taonode(n);
			themvaobk(l,t,x);
		}else if(x==4){
			int n,x;
			printf("\nNhap so ban muon them: ");
			scanf("%d",&n);
			printf("\nSo ban muon them truoc so: ");
			scanf("%d",&x);
			themtruoc(l,n,x);
		}else if(x==5){
			int n,x;
			printf("\nNhap so ban muon them: ");
			scanf("%d",&n);
			printf("\nSo ban muon them sau so: ");
			scanf("%d",&x);
			themsau(l,n,x);
		}else if(x==6){
			xoadau(l);
		}else if(x==7){
			xoacuoi(l);
		}else if(x==8){
			int x;
			printf("\nNhap vi tri ban muon xoa: ");
			scanf("%d",&x);
			xoabk(l,x);
		}else if(x==9){
			int x;
			printf("\nSo ban muon xoa truoc so: ");
			scanf("%d",&x);
			xoatruoc(l,x);
		}else if(x==10){
			int x;
			printf("\nSo ban muon xoa sau so: ");
			scanf("%d",&x);
			xoasau(l,x);
		}else if(x==11){
			printf("\n");
			xuat(l);
			system("pause");
		}else break;
	}
}

//1
//1
//1
//1
//1
//1
//1
//1
//1
//1
//1
//1
//4
//2
//1


void xoa(list &l, int x){
	while(l.dau->data==x){
		l.dau=l.dau->next;
	}
	for(node *k=l.dau;k->next->next!=NULL;k=k->next){
		if(k->next->data==x){
			k->next=k->next->next;
		}
	}
}



