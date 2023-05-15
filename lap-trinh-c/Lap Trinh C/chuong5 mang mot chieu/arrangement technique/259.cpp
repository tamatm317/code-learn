#include <iostream>
using namespace std;
void Input_array(int *a, int n);
void Output_array(int *a, int n);
bool perfectnumber( int n);
void sortdown_perfectnumber(int *a, int n);
void swap ( int &a, int &b);

int main(){
	int n;
	do
	{
		cout << "\nEnter the number of elements of the array: ";
		cin >> n;
		if (n<= 0)
		{
			cout << "\nPlease enter n>0: ";
		}
	}
	while(n<=0);
	int *a = new int [n];
	cout << "\n\n\t\tINPUT ARRAY \n";
	Input_array(a,n);
	cout << "\n\n\t\tOUTPUT ARRAY\n";
	Output_array(a,n);

	sortdown_perfectnumber(a,n);
	cout << "\n\n\t\tSORTED PERFECT NUMBER \n";
	Output_array(a,n);
	delete []a;
	system("pause");
	return 0;


}

void Input_array(int *a, int n)
{
	for ( int i =0;i<n; i++)
	{
		cout << "\nType a["<< i << "] = ";
		cin >> a[i];
	}
}
void Output_array(int *a, int n)
{
	for (int i =0;i<n; i++)
	{
		cout << a[i] << " ";
	}
}

bool perfectnumber(int n)
{
	int tong = 0;
	for (int i =1; i<n; i++){
		if ( n%i == 0){
			tong +=i;
		}
	}
	if ( n == tong)
	{
		return true;
	}
	return false;
}
void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;

}
void sortdown_perfectnumber(int *a, int n){
	for (int i =0; i<n; i++){
		for ( int j =i+1; j<n; j++){
			if (perfectnumber(a[i]) == true && perfectnumber(a[j]) == true){
				if ( a[i] < a[j]){
					swap(a[i],a[j]);
				}
			}5
		}
	}
}
