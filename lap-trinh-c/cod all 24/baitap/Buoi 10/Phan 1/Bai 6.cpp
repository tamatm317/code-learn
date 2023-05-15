//10.6 p1 c1
#include <stdio.h>

void dao(int n){
	if (n<10) printf("%d",n);
	else{
		printf("%d",n%10);
		dao(n/10);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	dao(n);
}


//10.6 p2 c2
#include <stdio.h>
int d=0;

void dao(int n){
	if (n<10) d=d*10+n;
	else{
		d=d*10+n%10;
		dao(n/10);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	dao(n);
	printf("%d",d);
}



