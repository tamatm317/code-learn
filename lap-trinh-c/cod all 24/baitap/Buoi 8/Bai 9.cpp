#include <stdio.h>

1 2 
3 4 

//8.9 c1
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	
	if(a==6||b==6){
		printf("0/1");
	}else{
		//Muon thang thi phai lon hon hoac bang nguoi co so diem cao nhat
		int max=a;
		if(b>max) max=b;
		
		int p;
		for(int i=2;i<=max;i++){
			if((7-max)%i==0&&6%i==0){         
				p=i;
			}
		}
		
		printf("%d/%d",(7-max)/p,6/p);
	}
	return 0;
}
6 6
//Chi co truong hop ca 2 so 6 thi moi khong co co hoi thang
//nguoc lai
neu so max la:
1 6/6 =1/1  cac so thang 1 2 3 4 5 6
2 5/6 =5/6  cac so thang 2 3 4 5 6
3 4/6 =2/3  cac so thang 3 4 5 6
4 3/6 =1/2  cac so thang 4 5 6
5 2/6 =1/3  cac so thang 5 6
6 1/6 =1/6  cac so thang 6


//cach 2

#include <stdio.h>
//8.9 c2
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	
	if(a==6||b==6){
		printf("0/1");
	}else{
		//Muon thang thi phai lon hon hoac bang nguoi co so diem cao nhat
		int max=a;
		if(b>max) max=b;
		
		switch (max){
			case 1: printf("1/1"); break;
			case 2: printf("5/6"); break;
			case 3: printf("2/3"); break;
			case 4: printf("1/2"); break;
			case 5: printf("1/3"); break;
			case 6: printf("1/6"); break;
		}
	}
	return 0;
}








