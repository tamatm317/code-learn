#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main(){
	int n ;
	char c[100];
	scanf("%d %s",&n,c);
	int n1=0 ,n2=0;
	for (int i =0 ; i<strlen(c);i++){
		if (c[i]=='A')n1++;
		else n2++;
	}
	if (n1>n2)printf("Anton");
	else if (n1<n2)printf("Danik");
	else printf("Friendship");
}
