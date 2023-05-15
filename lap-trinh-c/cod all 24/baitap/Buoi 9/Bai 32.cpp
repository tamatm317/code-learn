//9.32   c1
#include <stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int a,b,t=1;
		scanf("%d%d",&a,&b);
		while(b--){
			t*=a;
		}
		printf("%d\n",t);
	}	
}








//9.32   c2
#include <stdio.h>

int main(){
   	int n;cin>>n;
   	while(n--){
	    long long a,b;
		long long t=1;
		scanf("%lld%lld",&a,&b);
		while(b){
			if(b%2) t*=a;
		    b/=2;
		    a*=a;
		}
	    printf("%lld\n",t);
	}
}



