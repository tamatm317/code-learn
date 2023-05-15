#include <stdio.h>

int check(int a[], int n){
	int chan=0,le= 0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) chan++;
		else le++;
	}
	if((n%2==0&&chan>le)||(n%2!=0&&chan<le)) return 1;
	return 0;
}
int main(){
	int t; 
	scanf("%d", &t);
	int a[500],i=0;
	while(t--){
		i=0;
		char c=' ';
		while(c==' '){
			scanf("%d", &a[i]);
			i++;
			scanf("%c", &c);
		}
		if(check(a,i)) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}
