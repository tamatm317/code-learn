#include <iostream>
#include <cmath>

using namespace std;

int Liet_ke    ( int &n ) ;
int Tinh_tong  ( int &n ) ;
float Tinh_tich  ( int &n ) ;
int Dem        ( int &n ) ;
int Liet_ke_le ( int &n ) ;
int Tong_chan  ( int &n ) ;
int Tich_le    ( int &n ) ;
int Dem_chan   ( int &n ) ;


int main ()
{
	int n;
	cout << "\nVui long nhap n: ";
	cin >> n ;
	cout << "Cac uoc so cua " << n <<  " la: ";
	cout << Liet_ke(n);
	cout << "\nTong tat ca uoc so cua so nguyen duong "<< n << " la: "<< Tinh_tong(n);
	cout << "\nTich tat ca uoc so cua so nguyen duong "<< n << " la: "<< Tinh_tich(n);
    system("pause");
    return 0;
	/*cout << "\nSo luong uoc so cua so nguyen duong "<< n << " la: "<< Dem(n);
	cout << "\nTat ca  uoc so le cua so nguyen duong "<< n << " la: "<< Liet_ke_le(n);
	cout << "\nTong tat ca uoc so chan cua so nguyen duong "<< n << " la: "<< Tong_chan(n);
	cout << "\nTich tat ca uoc so le cua so nguyen duong "<< n << " la: "<< Tich_le(n);
	cout << "\nSo luong uoc so chan cua so nguyen duong "<< n << " la: "<< Dem_chan(n); 
	*/
}

int Kiemtra ( int &n )	
{
	do
	{
		if ( n <= 0 )
		{
			cout << "\nVui long nhap lai n: ";
		}
	}
	while ( n<= 0);
}

int Liet_ke ( int &n )
{
	int Kiemtra (n);
	for ( int i = 1; i < n; i ++)
	 {
	 	if ( n % i == 0)
	 	{
	 		cout << i << "  " ;
	 	}	 	   
	}  
}
 
int Tinh_tong ( int &n )
{
	int Kiemtra(n);
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		if ( n%i == 0 )
		{
			s =s + i; 
		}
	}
	return s;
}

float Tinh_tich ( int &n )
{
	int Kiemtra(n);
	int s =1;
	for ( int i =1; i<= n; i++)
	{
		if (n%i == 0 )
		{
			s = s*i;
		}
	}
	return s;
}



