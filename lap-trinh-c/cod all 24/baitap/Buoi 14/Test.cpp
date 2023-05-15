#include<stdio.h> 
main(){
	int a[10000];
	int n;
	scanf("%d",&n);
	int vt1=1,vt2=2; 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min1 = a[0], min2 = a[1];
	for (int i = 1; i <n; ++i){
		if (a[i] < min1){
			min2 = min1;
			min1 = a[i];
			vt2= vt1;
			vt1=i+1; 
		}
		else if (a[i] < min2) {
		min2 = a[i];
		vt2=i+1;
		}
	}
	printf("%d %d\n",min1,vt1);
	printf("%d %d",min2,vt2); 
	return 0; 
}
