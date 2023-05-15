#include <stdio.h>

int main(){
	//Toan tu dia chi: &   
	int a=12;
	printf("Gia tri cua a: %d",a);
	printf("\nDia chi cua a: %d",&a);
	
	//Toan tu gia tri: *
	printf("\nGia tri tai dia chi bien a: %d",*&a);
}



   
   
   
   
   
   
   
   
   
   
   
   
#include <stdio.h>

int main(){
	int a=12;
	int *p = &a;
	printf("Gia tri cua a: %d",a);
	printf("\nDia chi cua a: %d",&a);
	printf("\nGia tri cua p: %d",p);
	printf("\nGia tri tai dia chi cua con tro p: %d",*p);
	
	*p+=20;
	printf("\nGia tri cua a sau khi doi: %d",a);
	int b=30;
	p=&b;      //
	printf("\nGia tri cua b: %d",b);
	*p+=20;
	printf("\nGia tri cua b sau khi doi: %d",b);
}








//#include <stdio.h>
//
//int main(){
//	int a=12;
//	int *p3,*x1,y1;
//}

#include <stdio.h>

int main(){
	int a=12;   
	int *p1;     // khai bao con tro p1 kieu du lieu int
	int* p3;     // Khai bao bien p3 kieu con tro int (int*)
}


