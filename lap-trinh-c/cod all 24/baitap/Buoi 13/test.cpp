//i: for ngoai : tren xuong duoi
//j: for trong : trai sang phai
//Linh dong i va j
//Tim moi quan he giua sao (so) va i (hoac) j
// chia van de lon thanh cac van de co ban
// ma hoa nhung bai moi, bai kho thanh nhung bai de, don gian

#include <stdio.h>


int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n-i;++j)
			printf("~");
		for(int j=1;j<=i;++j)
			printf("%d",2*j-1);
		for(int j=i-1;j>=1;--j)
			printf("%d",2*j-1);
		printf("\n");
	}
}

		5
						i	j			2*j-1		
		~~~~       1	1	
		~~~       13    2	1			1
		~~       135    3	2 1			31
		~       1357    4	3 2 1		531
		       13579    5	4 3 2 1		7531








