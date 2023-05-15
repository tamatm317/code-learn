#include<iostream>
#include<cstring>
int main(){
	char n[10000];
	gets(n);
	char *t = strtok(n," +=-*&/");
	int dem = 0;
	while(t!=NULL) // null = nothng
	{
		// printf("%s\n",t);
		++dem;
		t = strtok(NULL," +=-*&/");
		
	}
	std::cout << dem;
} 