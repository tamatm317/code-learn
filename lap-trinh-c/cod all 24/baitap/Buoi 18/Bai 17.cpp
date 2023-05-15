//18.17 c1
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int ktra(char a[], char b[][100], int n){
	for(int i=0;i<n;++i)
		if(strcmp(a,b[i])==0) return 0;
	return 1;
}

int main(){
	char a[100][100], b[1000];
	gets(b);	
	int n=0;
	char *t=strtok(b," ");
	while(t!=NULL){
		strcpy(a[n++],t);
		if(ktra(a[n-1],a,n-1))
			printf("%s ",a[n-1]);
		t=strtok(NULL," ");
	}
}



//18.17  c2
#include <stdio.h>
#include <string.h>

int main(){
	char a[10000], b[1000]="***";
	gets(a);	
	int n=0;
	char *t=strtok(a," ");
	while(t!=NULL){
		char x[100]="*";
		strcat(x,t);
		strcat(x,"*");
		if(strstr(b,x)==0)
			printf("%s ",t);
		strcat(b,t);
		strcat(b,"**");
		t=strtok(NULL," ");
	}
}



//c3
#include <iostream>
#include <sstream>
using namespace std;
#include <vector>
#include <set>


int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	vector<string> ve;
	string work;
	while(ss>>work){
		ve.push_back(work);
	}
	
	set<string> se;
	for(int i=0;i<ve.size();++i){
		if(se.find(ve[i])==se.end()){
			cout<<ve[i]<<" ";
			se.insert(ve[i]);
		}
	}
}



//c4
#include <iostream>
#include <sstream>
#include <map>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	stringstream ss(s);
	map<string,int> ma;
	string work;
	while(ss>>work){
		ma[work]++;
		if(ma[work]==1)
			cout<<work<<" ";
	}
}
