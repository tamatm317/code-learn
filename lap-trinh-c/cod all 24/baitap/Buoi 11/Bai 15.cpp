//11.15
#include <stdio.h>

int UCLN(int a, int b){
    if(a%b== 0) return b;
	if(b%a==0) return a;
    while (a*b != 0){ 
        if (a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a+b;
}

//int UCLN(int x,int y){
//	if(x%y== 0) return y;
//	if(y%x==0) return x;
//	if(x>y) return UCLN(x-y,y);
//	else return UCLN(x,y-x);
//}

int main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	for(int i=0;i<n;++i){
		scanf("%d",&a[i]);
	}
	
	int UC=a[0];
	for(int i=1;i<n;++i){
		UC=UCLN(UC,a[i]);
	}
	printf("%d",UC);
}




