#include <stdio.h>

int tong(int x){
	int t=0;
	while(x>0){
		t+=x%10;
		x/=10;
	}
	return t;
}

int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	if(tong(a)>tong(b)){
		printf("%lld %lld",b,a);
	}else{
		printf("%lld %lld",a,b);
	}
	return 0;
}
