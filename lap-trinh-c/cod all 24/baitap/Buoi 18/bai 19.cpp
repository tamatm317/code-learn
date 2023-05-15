//18.19 c1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char b[1000], a[100][100];
	gets(b);
	
	for(int i=0;i<strlen(b);++i)
		b[i]=tolower(b[i]);
		
	int n=0;
	char *t=strtok(b," ");
	while(t!=NULL){
		strcpy(a[n++],t);
		t=strtok(NULL," ");
	}
	//18.19 phan 2
	int c[1000];
	memset(c,0,sizeof(c));
	int dem;
	for(int i=0;i<n;++i){
		if(c[i]) continue;
		dem=0;
		
		for(int j=i;j<n;++j){
			if(strcmp(a[i],a[j])==0) {
				dem++;
				c[j]++;
			}
		}
		printf("%s %d\n",a[i],dem);
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
	for(int i=0;i<s.length();++i){
		s[i]=tolower(s[i]);
	}
	g=s;
	stringstream ss(s);
	map<string,int> ma;
	string work;
	while(ss>>work){
		ma[work]++;
	}
	stringstream xx(g);
	while(xx>>work){
		if(ma[work]!=0)
			cout<<work<<" "<<ma[work]<<endl;
		ma[work]=0;
	}
}
