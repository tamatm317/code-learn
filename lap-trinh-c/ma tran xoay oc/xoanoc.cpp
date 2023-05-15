#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
#define l 10
class Xoanoc
 
{ private:
	int a[l][l],m,n;
public:

void NhapMaTran(int a[][l], int &m, int &n)
{
	cout<<"Nhap so dong, so cot cua ma tran: ";
	cin>>m;
	cin>>n;
	//int i, j;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++)
		{  cout<<i<<j <<endl;
			//cout<<j<<endl;
			cin>>a[i][j];
		}
}
void XuatMaTran(int a[][l], int m, int n)
{
	int i, j;
	for (i=0; i<m; i++)
	{
		for (j=0; j<n; j++)
			cout<< a[i][j];
			cout<<endl;
	}
}
void xoanoc(int a[][l],int m,int n)
{
	int k=1,d1=0,d2=m-1,c1=0,c2=n-1;
	while (k<n*m)
	{
		for (int i=c1;i<=c2;i++)
		a[d1][i]=k++;
		d1++;
		for(int j=d1;j<=d2;j++)
		a[j][c2]=k++;
		c2--;
		for ( int i=c2;i>=c1;i--)
		a[d2][i]=k++;
		d2--;
		for (  int j=d2;j>=d1;j--)
		a[j][c1]=k++;
		c1++;
	}
}
};
int main()
{ Xoanoc A;
	int a[l][l],m,n;
	A.NhapMaTran(a,m,n);
	A.XuatMaTran(a,m,n);
	A.xoanoc(a,m,n);
	A.XuatMaTran(a,m,n);
	cin.get();
	cin.get();

}
