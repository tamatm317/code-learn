/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float x,y,z;
	cout << "\nHay nhap x: "; cin >> x;
	cout << "\nHay nhap y: "; cin >> y;
	if ((pow(x,2)+pow(y,2))<= 1 ){
		z = pow(x,2) + pow(y,2);
	}
	else
	{
		if ( y>=x ){
			z = x + y ;
		}
		else 
		{
			z = 0.5;
		}
	}
	cout << "\nGia tri cua z la: "<< z;
	system("pause");
	return 0;

} */

#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float x,y,z,a,b,r;
	cout << "\nHay nha tam hinh tron: ";
	cin >> a;
	cin >> b;
	cout << "\nHay nhap ban kinh hinh tron: ";
	do{
		cin >> r;
		if ( r <= 0){
			cout << "\nVui long nhap lai r: ";
		}
	}while ( r<= 0);

	cout << "\nHay nhap hai diem x va y: ";
	cin >> x;
	cin >> y;
	int c = x-a;
	int d = y-b;
	if ( pow(c,2) + pow(d,2) == pow(r,2)){
		z = fabs(x)+ fabs(y);
	}
	else{
		z = x + y ;
	}
	cout << "\nGia tri cua z la: " << z;
	system("pause");
	return 0;


}






