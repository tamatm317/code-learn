//9.14   c1
#include <stdio.h>
#include <math.h>

int nto(int x){
	if(x<2) return 0;
	else{
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0) return 0;
		}
		return 1;
	}
}

int uoc(int n){
	int dem=0;
	if(nto(n)==1) return 0;
	for(int i=2;i<=n/2;i++){
		if(n%i==0&&nto(i)==1) dem++;
		if(dem==3) break;
	}
	if(dem==3) return 1;
	return 0;
}

int tn(int n){
	int tam=n;
	int tong=0;
	while(n!=0){
		tong=tong*10+n%10;
		n/=10;
	}
	if(tam==tong) return 1;
	return 0;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int tam=0;
	for(int i=a;i<=b;i++){
		if(uoc(i)==1&&tn(i)==1) printf("%d ",i), tam=1;
	}
	if(tam==0) printf("-1");
	printf("\n");
	return 0;
}






//9.14   c2
#include <stdio.h>
#include <math.h>

int uoc(int n){
	int dem=0;
	for(int i=2;i<=n;++i){
		if(n%i==0){
			++dem;
			while(n%i==0) n/=i;
		}
	}
	return dem>=3;
}

int tn(int n){
	int tam=n;
	int tong=0;
	while(n!=0){
		tong=tong*10+n%10;
		n/=10;
	}
	if(tam==tong) return 1;
	return 0;
}

int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	int tam=0;
	for(int i=a;i<=b;i++){
		if(uoc(i)==1&&tn(i)==1) printf("%d ",i), tam=1;
	}
	if(tam==0) printf("-1");
	printf("\n");
	return 0;
}
