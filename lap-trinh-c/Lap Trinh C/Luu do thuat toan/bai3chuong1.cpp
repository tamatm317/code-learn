#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;cout << "\nHay nhap gia tri n: ";
	do
	{
		
		cin >> n ;
		if ( n<= 0 ) cout << "\nVui long nhap lai n: ";
	} 
	while (n <= 0 );
	float tong = 0 ;  // biến tổng có thể là dạng float
	
	for (int i = 1 ; i <=n ; i++ )
	{
		tong = tong + 1/float(i); // ép kiểu dữ liệu cho i để trả về tổng là một kiểu float 
	}
	cout << "\nGia tri cua S(n) la: " << tong ;
	system("pause");
	

}
