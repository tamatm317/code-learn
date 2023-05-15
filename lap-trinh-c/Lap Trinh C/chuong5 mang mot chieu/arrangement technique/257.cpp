#include <iostream>
#include <algorithm>
using namespace std;

void enter_array ( float *a, int n);
void print_array ( float *a, int n);
void sort_up_odd_position ( float *a, int n);
void swap ( float &a, float &b);

int main(){
	int n;
	do {
		cout << "\nEnter the number of the elements of tha array: ";
		cin >> n;
		if ( n<=0){
			cout << "\nPlease type n > 0: ";
		}
	} while ( n<=0);
	float *a = new float [n];
	cout << "\n\n\t\tIMPORT ARRAY \n";
	enter_array(a,n);
	cout << "\n\n\t\tPRINT ARRAY \n\t\t";
	print_array(a,n);

	sort_up_odd_position(a,n);
	cout << "\n\n\t\tSORTED ARRAY ";
	print_array(a,n);
	delete []a ;
	system ("pause");
	return 0;
	}


void enter_array(float *a, int n){
	for ( int i =0; i<n; i++){
		cout << "\nType a["<< i << "] = ";
		cin >> a[i];
	}
} 

void print_array ( float *a, int n){
	for ( int i = 0; i<n; i++){
		cout << a[i] << " ";
	}
}
void swap ( float &a, float &b){
	  float temp = a;
	  a=b;
	  b = temp;
}

void sort_up_odd_position ( float *a, int n){
	for (int i =1; i<n; i++){
		for ( int j =i+2; j<n; j++){
			if(i%2 == 1 && j%2==1){
				if ( a[i] > a[j]){
					swap(a[i],a[j]);
				}
			}
		}
	}
}