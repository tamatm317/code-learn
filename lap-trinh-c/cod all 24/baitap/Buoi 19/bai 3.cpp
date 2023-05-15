//19.3
#include <stdio.h>
#include <string.h>

int main(){
	char a[1001];
	int b[200];
	gets(a);
	int dem=0;
	memset(b,0,sizeof(b));
	for(int i=0;i<strlen(a);i++){
		if(b[a[i]]==0) dem++;
		b[a[i]]++;
	}
	if(dem%2==0) printf("CHAT WITH HER");
	else printf("IGNORE HIM");
	return 0;
}
