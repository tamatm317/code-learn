#include<stdio.h>
#include<string.h>
struct sinh_vien{
	char ten[100];
	int tuoi;
	float dem;
	long long luong;
};
int main(){
	int a;
	struct sinh_vien sv;
	printf("Nhap ten: ");
	char ten[100];
	gets(ten);
	strcpy(sv.ten,ten);
	printf("Nhap tuoi: ");
	scanf("%d",&sv.tuoi);
	printf("Ten: %s", sv.ten);
	printf("Tuoi: %d",sv.tuoi);
}