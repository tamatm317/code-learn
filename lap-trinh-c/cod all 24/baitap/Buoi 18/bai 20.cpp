//18.20 phan 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//int main(){
//	char a[1000], b[1000], c[100][100], d[100][100];
//	gets(a);
//	gets(b);
//	
//	for(int i=0;i<strlen(a);++i)
//		a[i]=tolower(a[i]);
//	for(int i=0;i<strlen(b);++i)
//		b[i]=tolower(b[i]);
//	
//	int n=0,m=0;
//	char *t=strtok(a," ");
//	while(t!=NULL){
//		strcpy(c[n++],t);
//		t=strtok(NULL," ");
//	}
//
//	t=strtok(b," ");
//	while(t!=NULL){
//		strcpy(d[m++],t);
//		t=strtok(NULL," ");
//	}
//	
//	for(int i=0;i<n;++i){
//		int ok=0;
//		for(int j=0;j<m;++j){
//			if(strcmp(c[i],d[j])==0) {
//				ok=1;
//				break;
//			}
//		}
//		if(ok==0){
//			printf("%s ",c[i]);
//		}
//	}
//}



//c2
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char a[1000], b[1000]=" ",d[1000],e[1000][1000];
	gets(a);
	gets(d);
	strcat(b,d);
	strcat(b," ");
	
	for(int i=0;i<strlen(a);++i)
		a[i]=tolower(a[i]);
	for(int i=0;i<strlen(b);++i)
		b[i]=tolower(b[i]);
	
	int n=0;
	char *t=strtok(a," ");
	while(t!=NULL){
		char x[100]=" ";
		strcat(x,t);
		strcat(x," ");
		if(strstr(b,x)==0) {
			strcpy(e[n++],t);
		}
		t=strtok(NULL," ");
	}
	for(int i=0;i<n;++i){
		for(int j=i+1;j<n;++j){
			if(strcmp(e[j],e[i])==-1){
				char *g=e[j];
				*e[j]=*e[i];
				*e[i]=*g;
			}
		}
		printf("%s ",e[i]);
	}
}


//c2
#include <iostream>
#include <sstream>
#include <string.h>
#include <map>
using namespace std;

int main(){
	string s,g;
	getline(cin,s);
	getline(cin,g);
	for(int i=0;i<s.length();++i){
		s[i]=tolower(s[i]);
	}
	for(int i=0;i<s.length();++i){
		g[i]=tolower(g[i]);
	}
	stringstream gg(g);
	map<string,int> ma;
	
	string work;
	while(gg>>work){
		ma[work]++;
	}
	
	stringstream ss(s);
	while(ss>>work){
		if(ma[work]==0)
			cout<<work<<" ";
	}
}
