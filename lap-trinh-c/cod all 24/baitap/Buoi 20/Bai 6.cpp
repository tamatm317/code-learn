#include <stdio.h>
#include <string.h>

int n;

struct sach{
	char ts[51], ttg[31];
	int nam;
};

void nhap(struct sach &s){
	printf("Ten sach: ");
	gets(s.ts);
	printf("Ten tg: ");
	gets(s.ttg);
	printf("Nam xuat ban: ");
	scanf("%d",&s.nam);
	getchar();
}

void old(struct sach s[]){
	int min=s[0].nam;
	int tam=0;
	for(int i=0;i<n;i++){
		if(s[i].nam<min) {
			tam=i;
			min=s[i].nam;
		}
	}
	printf("\n\n\n\t---------------------- Sach cu nhat --------------------\n");
	printf("\n  STT\t|\tTen sach\t |\tTen tac gia   |\t Nam suat ban\n");
	printf("   %-5d|\t%-14s   |\t%-14s|\t   %-7d\n",tam+1,s[tam].ts,s[tam].ttg,s[tam].nam);
	printf("\n\t---------------------------------------------------------\n");
}

void tim(struct sach s[]){
	int max=0,b[3000],nam=s[0].nam;
	memset(b,0,sizeof(0));
	for (int i=0;i<n;i++){
		b[s[i].nam]++;
	}
	for (int i=0;i<n;i++){
		if(b[s[i].nam]>max){
			max=b[s[i].nam];
			nam=s[i].nam;
		}
	}
	printf("\n\n\n\t-------------- Nam co so luong sach lon nhat ------------\n");
	printf("\n  STT\t|\tTen sach\t |\tTen tac gia   |\t Nam suat ban\n");
	for(int i=0;i<n;i++){
		if(s[i].nam==nam)
		printf("   %-5d|\t%-14s   |\t%-14s|\t   %-7d\n",i+1,s[i].ts,s[i].ttg,s[i].nam);
	}
	printf("\n\t------------------------------------------------------------\n");
}

int main(){
	printf("Nhap so luong sach: ");
	scanf("%d",&n);
	getchar();
	struct sach s[n];
	for(int i=0;i<n;i++){
		printf("\nNhap sach thu %d: \n",i+1);
		nhap(s[i]);
	}
	
	printf("\n\n\n\t---------------------- Danh sach --------------------\n");
	printf("\n  STT\t|\tTen sach\t |\tTen tac gia   |\t Nam suat ban\n");
	for(int i=0;i<n;i++){
		printf("   %-5d|\t%-14s   |\t%-14s|\t   %-7d\n",i+1,s[i].ts,s[i].ttg,s[i].nam);
	}
	printf("\n\t------------------------------------------------------------\n");
	old(s);
	tim(s);
	return 0;
}



//4
//Khong ten
//Nguyen A
//2011
//Co ten
//Nguyen B
//2003
//Khong Khong
//Nguyen C
//1999
//Co Co
//Nguyen S
//2011

