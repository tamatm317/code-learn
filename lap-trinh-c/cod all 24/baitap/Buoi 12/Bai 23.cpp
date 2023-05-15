//12.23
include <stdio.h>

int main (){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	int c=0,l=0;
	for(int i=0;i<n;++i){
		if(a[i]%2==1) l++;
		else c++;
	}
	if (l<c) printf("%d",l);
	else printf("%d",c);
	return 0;
}
