#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void Nhap_mang(int a[], int n){
	for ( int i = 0; i<n; i++)
	{
		printf("\nHay nhap phan tu a[%d] = ",i );
		scanf("%d",&a[i]);	
	}
}

void Xuat_mang ( int a[], int n){
	for ( int i = 0; i<n; i++){
		printf("%d ", a[i]);
	}
}
void them  ( int a[], int &n, int pos, int x)
{
	realloc(a,(n+1)*sizeof(int));
	for ( int i = n-1; i>=pos; i--){
		a[i+1] = a[i];
	}
	a[pos] = x;
	n++;
}

void Xoa( int a[], int &n, int posdelete){
		for ( int i = posdelete+1; i<n; i++){
		a[i-1]=a[i];
	}
	realloc(a, (n-1)*sizeof(int)); 
    n--;
}

int main()
{
	int n;
	int *a;
	do
	{
		printf("\nHay nhap so luong phan tu nang: ");
		scanf("%d", &n);
	} while ( n<= 0);
	//a = (int *)malloc(n*sizeof(int)); // khi con trỏ a trỏ đến địa chỉ của vùng nhớ hệ điều hành sẽ cấp phát <=> con trỏ a trỏ đến cái địa chỉ của ô nhớ đầu tiên của vùng nhớ đó

    a = (int*)realloc(NULL, n*sizeof(int));
	printf("\n\n\t\tNHAP MANG\n");
	Nhap_mang(a,n);
	printf("\n\n\t\tXUAT MANG\n");
	Xuat_mang(a,n);
	/*int x;
	int pos;
	
	printf("\nHay nhap phan tu can them vao: ");
	
	scanf("%d",&x);
	
	printf("\nHay nhap vi tri can them: ");
	
	scanf("%d",&pos);
	them(a,n,pos,x);
	printf("\n\n\t\tMANG SAU KHI THEM \n");
	Xuat_mang(a,n);  */
	int posdelete;
	printf("\nHay nhap vi tri can xoa: ");

	scanf("%d", &posdelete);
	Xoa(a,n,posdelete);
	printf("\n\n\t\tMANG SAU KHI XOA: \n");
	Xuat_mang(a,n);
	printf("\nPhan tu a[%d] = %d", n, a[n]);
	free(a);  // giải phóng vùng nhớ cho con trỏ a
	getch(); // dừng màn hình
	return 0;
}  

/* n = 5;
int *a 
a = ( int*)malloc(n* sizeof(int));
vùng nhớ có 5 ô nhớ 
0   1   2   3   4  
[]	[]	[]	[]	[]

con trỏ a trỏ đến địa chỉ ô nhớ đầu tiên, quản lý cái mảng này
*/