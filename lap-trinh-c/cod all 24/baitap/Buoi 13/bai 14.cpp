//13.14  c1  phan 1
#include <stdio.h>
#include <math.h>
#include <string.h>

int nt(int n){
	if(n<2) return 0;
	else{
		for(int i=2;i<=sqrt(n);++i)
			if(n%i==0) return 0;
		return 1;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n],b[1000];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i) scanf("%d",&a[i]),b[a[i]]++;

	int tam=0;
	for(int i=1;i<1000;++i){
		if(nt(i)&&b[i]!=0){
			printf("%d %d\n",i,b[i]);
			tam++;
		}
	}
	if(tam==0) printf("0");
}


// c2 13.14
#include <stdio.h>
#include <math.h>

int nt(int n){
	if(n<2) return 0;
	else{
		for(int i=2;i<=sqrt(n);++i)
			if(n%i==0) return 0;
		return 1;
	}
}
//13.14 phan 3
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;++i) scanf("%d",&a[i]);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;++j){
			if(a[j]<a[i]){
				int c=a[i];
				a[i]=a[j];
				a[j]=c;
			}
		}
	}                    
	int d=1,tam=0;
	for(int i=0;i<n-1;++i){
		if(nt(a[i])==0) continue;
		if(a[i]==a[i+1]){
			d++;
		}else {
			printf("%d %d\n",a[i],d);
			d=1;
			tam=1;
		}
	}
	if(nt(a[n-1])&&a[n-1]!=a[n-2]) printf("%d 1",a[n-1]);
	if(tam==0) printf("0");
}
