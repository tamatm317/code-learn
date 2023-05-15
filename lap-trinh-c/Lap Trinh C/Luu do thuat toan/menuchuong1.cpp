#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	while (true)
	{
		cout<< "\n\n\t\t=============MENU CAC BAI TAP CHUONG 1=============";
		for ( int i = 1; i <= 20; i++)
		{
			cout << "\nBai "<< i << ": ";
		}
        cout << "\n\n\t\t=============END=============";
        break;
	}
    int luachon;
    cout << "\nNhap lua chon: ";
    cin >> luachon ;
    switch ( luachon )
    {
    	case 1:
    	{
    		int n;
    		do 
    		{
    			cout << "\nHay nap n: "; cin >> n;
    			if ( n<= 0) 
    				cout << "\nVui long nhap lai n: ";
    		}
    		while ( n<=0 );
    		long int tong= 0 ;
    		for ( int i=1; i<=n; i++)
    		{
    			tong = tong + i;
    		}
    		cout << "\nGia tri cua S(n) la: " << tong ;
    		system("pause"); 		
    	}
    	break;
    	case 2:
    	{
      		cout << "...........";
    		system("pause");
    		
    	}
    	break;
    	case 3:
    	{
    		int n;
	do
	{
		cout << "\nHay nhap gia tri n: ";
		cin >> n ;
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
    	break;
    	case 4:
    	{
    		cout << "...........";
    		system("pause");
    	}
    	break;
    	case 5:
    	{

    		cout << "...........";
    		system("pause");
    			
    	}
    	break;
    }
}