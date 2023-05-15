//17.20
#include<stdio.h>
#include<string.h>
int main(){
	char a[300];
	scanf("%s",a);
	int dem=1;

	for(int i=0;i<strlen(a)-1;i++){
		if(a[i]==a[i+1]){
			dem++;
			if(i==strlen(a)-1) dem++;
		}else dem=1;
		if(dem==7){
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
