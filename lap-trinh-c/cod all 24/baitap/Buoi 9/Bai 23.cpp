////9.23   c1
//#include <stdio.h>
//
//int cnt(int n,int m){
//	if(n%m==0||m%n==0) return 0;
//	for(int i=2;i<=n&&i<=m;i++){
//		if(n%i==0&&m%i==0) return 0;
//	}
//	return 1;
//}
//
//int main(){
//	int n,m;
//	scanf("%d%d",&n,&m);
//	if(cnt(m,n)==0) printf("NO");
//	else printf("YES");
//}


////9.23    c2
//#include <stdio.h>
//
//
////c1
//int ucln(int a, int b){
//	if(!(a%b)) return b;
//	else if(!(b%a)) return a;
//	while(a!=b){
//		if(a>b) a -= b;
//		else b -= a;
//	}
//	return a;
//}
//
//c2
//int ucln(int a, int b){
//	while(b){
//		int r=a%b;
//		a=b;
//		b=r;
//	}
//	return a;
//}
//
//int main(){
//	int n,m;
//	scanf("%d%d",&n,&m);
//	if(ucln(m,n)==1) printf("YES");
//	else printf("NO");
//}
