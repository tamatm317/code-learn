//9.31
#include <stdio.h>
#include <math.h>

int phi(int n) { 
    if (n == 0) return 0;
    int ans = n;
    for (int x = 2; x*x <= n; ++x) {
        if (n % x == 0) {
            ans -= ans / x;                  
            while (n % x == 0) n /= x;
        }
    }
    if (n > 1) ans -= ans / n;
    return ans;
}

int main(){
	int t;
	scanf("%d",&t);
	for(int i=1;i<=t;i++){
		int n;
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			printf("%d ",phi(i));
		}
		printf("\n");
	}	
}
