//chua biet diem dung
#include <stdio.h>

int ktra(int n){
	int x=n%10;
	n/=10;
	while(n!=0){
		if(n%10>x) return 0;
		x=n%10;
		n/=10;
	}
	return 1;
}

int main(){
	int a[10000];
	char c=' ';
	int i=1;
	scanf("%d", &a[0]);
	while(a[i-1]!=23134){	
		scanf("%d",&a[i]);
		i++;
		scanf("%c", &c);
	}
	for(int j=0;j<i;++j) {
		if(ktra(a[j])==0) continue;
		int tam=0;
		for(int t=0;t<j;++t){
			if(a[t]==a[j]) {
				tam=1;
				break;
			}
		}
		if(tam) continue;
		for(int t=j;t<i;++t){
			if(a[t]==a[j]) tam++;
		}
		printf("%d %d\n",a[j],tam);
	}
	return 0;
}


