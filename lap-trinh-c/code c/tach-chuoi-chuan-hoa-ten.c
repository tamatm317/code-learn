// ngUYEN van binh	
// BINH, Nguyen Van
#include<stdio.h>
#include<string.h>
#include<ctype.h>
void Chuanhoa(char c[])
{
	c[0] = toupper(c[0]);
	for(int i = 1;i<strlen(c);++i){
		c[i] = tolower(c[i]);		
	}
}
void str_upr(char c[]){
	for(int i = 0; i<strlen(c); ++i){
		c[i] = toupper(c[i]);
	}
}
int main(){
	char s[10000];
	gets(s);
	int n = 0;
	char a[20][50]; // mnagr hai chiều để lưu
	char *token = strtok(s," "); // token để cắt chuỗi
	while(token!=NULL){
		strcpy(a[n],token);
		n++;
		token = strtok(NULL, " ");
	}
	str_upr(a[n-1]);
	printf("%s, ", a[n-1]);
	for(int i = 0; i<n-1; ++i){
		Chuanhoa(a[i]);
		printf("%s",a[i]);
		if(i!=n-2) printf(" ");
	}
}
// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>

// void chuanHoa(char c[]){
// 	c[0]=toupper(c[0]);
// 	for(int i=1;i<strlen(c);i++){
// 		c[i]=tolower(c[i]);
// 	}
// }

// void str_upr(char c[]){
// 	for(int i=0;i<strlen(c);i++){
// 		c[i]=toupper(c[i]);
// 	}
// }

// int main(){
// 	char s[1000], a[20][50];
// 	gets(s);
// 	char *token=strtok(s," ");
// 	int n=0;
// 	while(token!=NULL){
// 		strcpy(a[n],token);
// 		n++;
// 		token=strtok(NULL," ");
// 	}
// 	str_upr(a[n-1]);
// 	printf("%s, ",a[n-1]);	

// 	for(int i=0;i<n-1;i++){
// 		chuanHoa(a[i]);
// 		printf("%s",a[i]);
// 		if(i!=n-2) printf(" ");
// 	}
// }
