#include <stdio.h>

int ktra(int x){
	int a=0;
	int b=1;
	while(b<x){
		int c=a+b;
		a=b;
		b=c;
	}
	if(b==x) return 1;
	else return 0;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",ktra(n));
	return 0;
}

8

a=0
b=1

c=a+b=0+1=1
a  =b=1
b  =c=1

c=a+b=1+1=2
a=b= 1
b=c=2

c=a+b=1+2=3
a=b= 2
b=c=3

c=a+b=2+3=5
a=b= 3
b=c=5

c=a+b=3+5=8
a=b= 5
b=c=8


b<n


b==n  -> n thuoc day
b!=n   -> no khong thuoc day
