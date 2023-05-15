
//c1
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
	
	int max=-1;
	char *tam;
	for(int i=0;i<n;++i){
		int dem=0;
		for(int j=i;j<n;++j){
			if(strcmp(a[i],a[j])==0) dem++;
		}
		if(dem>max){
			max=dem;
			tam=a[i];
		}
	}
	printf("%s %d",tam,max);
}



//c2
#include <iostream>
#include <sstream>
#include <string.h>
#include <map>
using namespace std;

int main(){ 
	string s;
	getline(cin,s);
	for(int i=0;i<s.length();++i){
		s[i]=tolower(s[i]);
	}
	map<string,int> ma;
	
	stringstream ss(s);    
	string work;           
	while(ss>>work){       
		ma[work]++;        
	}
	
	map<string,int>::iterator t,tam;
	int max=0;
	for(t=ma.begin();t!=ma.end();++t){
		if(max<(*t).second) {
			max=(*t).second;
			tam=t;
		}
	}
	cout<<(*tam).first<<" "<<(*tam).second;
}
