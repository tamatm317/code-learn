
#include<stdio.h>
#include<string.h>
struct ngaythangnam{
	int ngay,thang,nam;
};
struct thong_tin{
	char ten[1000];
	int so_luong;
	struct ngaythangnam day;
};
int main(){
	struct thong_tin info;
	printf("Hay nhap ten lo hang: ");//nhập vào tên lô hàng
	char n[1000];
	gets(n);
	strcpy(info.ten,n);
	printf("Hay nhap so luong: "); // số lượng nhập hàng
	int sl; 
	scanf("%d",&sl);
	info.so_luong = sl;
	int ngay,thang,nam;
	printf("Hay nhap ngay nhan(ngay, thanh, nam) : "); // thông tin ngày nhập
	scanf("%d%d%d",&ngay,&thang,&nam);
	info.day.ngay = ngay;
	info.day.thang = thang;
	info.day.nam = nam;
	printf("Tem lo hang: %s\n", info.ten);
	printf("So luong: %d\n", info.so_luong);
	printf("Ngay nhap: %d - %d - %d\n", info.day.ngay, info.day.thang, info.day.nam);
}