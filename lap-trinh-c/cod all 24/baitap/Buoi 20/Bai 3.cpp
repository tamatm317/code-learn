#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int n;

struct toado{
	char ten[100];
	int x,y;
};


void nhap(struct toado &td){
	printf("Ten: "),scanf("%s",td.ten);
	printf("x: "); scanf("%d",&td.x);
	printf("y: "); scanf("%d",&td.y);
}

void tdmax(struct toado td[]){
	int max=td[0].y;
	int tam=0;
	for(int i=1;i<n;i++){
		if(td[i].y>max) {
			tam=i;
			max=td[i].y;
		}
	}
	printf("\n\nDiem co tung do lon nhat la: %s",td[tam].ten);
}

float kc(int x,int y){
	return sqrt(x*x+y*y);
}

void ikc(struct toado td[]){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(kc(td[j].x,td[j].y)>kc(td[i].x,td[i].y)){
				struct toado l=td[i];
				td[i]=td[j];
				td[j]=l;
			}
		}
	}
	printf("\n\nDanh sach in ra theo toa do giam dan la: \n");
	for(int i=0;i<n;i++){
		printf("Diem %s: %.2f\n",td[i].ten,kc(td[i].x,td[i].y));
	}
}

int main(){
	printf("Nhap so luong diem: ");
	scanf("%d",&n);
	struct toado td[n];
	for(int i=0;i<n;i++){
		printf("Nhap diem %d: \n",i+1);
		nhap(td[i]);
	}
	printf("\nCac diem co toa do la:");
	for(int i=0;i<n;i++){
		printf("\n  %s (%d,%d)",td[i].ten,td[i].x,td[i].y);
	}
	
	printf("\n\nCac diem thuoc goc phan tu thu nhat: ");
	for(int i=0;i<n;i++){
		if(td[i].x>=0&&td[i].y>=0) printf("%s ",td[i].ten);
	}
	
	tdmax(td);
	ikc(td);
	return 0;
}

//5
//A
//1
//2
//B
//5
//6
//C
//-8
//-9
//D
//3
//12
//E
//16
//-4

