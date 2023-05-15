//19.14 cach 1
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	scanf("%d",&n);
	getchar();
	for(int i=1; i<=n; ++i) {
		char a[1001];
		int x;
		scanf("%d",&x);
		getchar();
		gets(a);
		if(strlen(a)<11) {
			printf("NO\n");
			continue;
		} else {
			int tam=0;
			for(int i=0; i<strlen(a)-11; ++i) {
				if(a[i]=='8') {
					printf("YES\n");
					tam=1;
					break;
				}
			}
			if(tam==0) printf("NO\n");
		}
	}
}



////c2
#include<stdio.h>
#include<string.h>


int main() {
	int n,t;
	scanf("%d",&n);
	getchar();
	for(int i = 1; i <= n ; i++) {
		scanf("%d",&t);
		getchar();
		char s[1000];
		gets(s);
		int tam = -1;
		for(int i = 0 ; i < strlen(s); i++) {
			if(s[i] == '8') {
				tam = i;
				break;
			}
		}
		if(tam !=-1 && (t - (tam+1))>=11)printf("YES\n");
		else printf("NO\n");
	}

	return 0;
}
//}
