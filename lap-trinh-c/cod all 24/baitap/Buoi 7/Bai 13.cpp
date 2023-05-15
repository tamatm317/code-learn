//7.13
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int dem=1;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			for(int j=dem;j<dem+i;j++){
				printf("%d ",j);
			}
		}else{
			for(int j=i+dem-1;j>=dem;j--){
				printf("%d ",j);
			}
		}
		dem+=i;	
		printf("\n");
	}
	return 0;
}




//7.13   c2

#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int ht=1;
	int max=0;
	for(int i=1;i<=n;++i){
		if(i%2==1){
			for(int j=1;j<=i;++j){
				printf("%d ",ht);
				ht++;
			}
		}else{
			max=ht+i-1;
			for(int j=max;j>=ht;--j){
				printf("%d ",j);
			}
			ht+=i;
		}
		printf("\n");
	}
}


