//9.24
#include <stdio.h>
#include <math.h>

long long phi(long long n) { 
    if (n == 0) return 0;
    long long ans = n;
    for (int x = 2; x <= n; ++x) {
        if (n % x == 0) {
            ans -= ans / x; 
            while (n % x == 0) n /= x;
        }
    }
//    if (n > 1) ans -= ans / n;
    return ans;
}

int main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",phi(n));
}




































//https://www.youtube.com/watch?v=aqW91x9Gi3k
//XEM LAI LINK VIDEO
