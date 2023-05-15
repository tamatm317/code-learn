//3.21
#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);

	int m=n%7;
	if(m==0) printf("%d %d",n/7*2,n/7*2);
	else if(m==1) printf("%d %d",n/7*2,n/7*2+1);
	else if(m==6) printf("%d %d",n/7*2+1,n/7*2+2);
	else printf("%d %d",n/7*2,n/7*2+2);	
	return 0;
}









//
//		1        8        15       n%7 = 1
//TT                                 n/7*2
//TD                                 n/7*2+1
//
//
//
//		2        9        16       n%7 = 2
//TT                                 n/7*2
//TD                                 n/7*2+2
//
//
//
//		3        10       17       n%7 = 3
//TT                                 n/7*2
//TD                                 n/7*2+2
//
//
//
//		4        11       18       n%7 = 4
//TT                                 n/7*2
//TD                                 n/7*2+2 
//
//
//
//		5        12       19       n%7 = 5
//TT                                 n/7*2
//TD                                 n/7*2+2
//
//
//		6        13       20       n%7 = 6
//TT                                 n/7*2+1
//TD                                 n/7*2+2 
//
//
//
//
//		7        14      21        n%7 = 7
//TT                                 n/7*2
//TD                                 n/7*2   
//
//
//
//








