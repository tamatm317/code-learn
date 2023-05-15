////in ra so dung truoc
//#include <stdio.h>
//#include <string.h>
//
//int main(){
//	int n,d=0;
//	scanf("%d",&n);
//	int a[n],b[1000];
//	memset(b,0,sizeof(b));
//	for(int i=0;i<n;++i) scanf("%d",&a[i]),b[a[i]]++;
//	int max=0,s;
//	for(int i=0;i<n;i++){
//		if(b[a[i]]>max) {
//			max=b[a[i]];
//			s=a[i];
//		}
//	}
//	printf("%d %d",s,max);
//}
//
//
//in ra so dung truoc
#include <stdio.h>
#include <string.h>

int main(){
	int n,d=0;
	scanf("%d",&n);
	int a[n],b[1000];
	memset(b,0,sizeof(b));
	for(int i=0;i<n;++i) scanf("%d",&a[i]),b[a[i]]++;
	int max=0,s;
	for(int i=0;i<n;i++){
		if(b[a[i]]>max) {
			max=b[a[i]];
			s=a[i];
		}else if(b[a[i]]==max&&a[i]<s){
			s=a[i];
		}
	}
	printf("%d %d",s,max);
}



