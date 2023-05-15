//9.33 c1
#include <stdio.h>
#include <math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);++i)
		if(!(n%i)) return 0;
	return n>1;
}

int tim(int n, int p){
	int t=0;
	for(int i=p;i<=n;i+=p){
		int tam=i;
		while(!(tam%p)){
			++t;
			tam/=p;
		}
	}
	return t+1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long res=1;
		for(int i=2;i<=n;++i){
			if(snt(i)) res*=tim(n,i);
		}
		printf("%lld\n",res);
	}	
}




//9.33 c2
#include <stdio.h>
#include <math.h>

int snt(int n){
	for(int i=2;i<=sqrt(n);++i)
		if(!(n%i)) return 0;
	return n>1;
}

int legendre(int n, int p){
	int t=0;
	for(int i=p;i<=n;i*=p){
		t+=n/i;
	}
	return t+1;
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		long long res=1;
		for(int i=2;i<=n;++i){
			if(snt(i)) res*=legendre(n,i);
		}
		printf("%lld\n",res);
	}	
}
