#include <iostream>
using namespace std;

void Input_array(int a[], int n)
{
	for (int i =0; i<n; i++)
	{
		cout << "\nEnter a[" << i << "] = ";
		//cin >> a[i];
		cin >> *(a+i); // cin >> i[a];
	}
}
void Print_array(int a[], int n){
	for(int i = 0; i<n; i++){
		cout << a[i] << " ";
	}
}



// void add_element( int * &a, int &n, int pos, int x){
// 	//B1: tạo mảng temp chứa mảng a
// 	int *temp = new int [n];
// 	for ( int i = 0; i<n; i++){
// 		temp[i] = a[i]; 
// 	}
// 	//B2: giai phong vung nho cu cua a
// 	delete []a;
// 	//B3: cap phat lai vung nho moi cho mang a voi so luong phan tu mang = n+1 
// 	a = new int [n+1];
// 	// B4: đổ tất cả các phần tử từ nảng temp sang mảng a:
// 	for ( int i = 0; i<n; i++){
// 		a[i] = temp[i];
// 	}
// 	//b5: giai phong vung nho mang temp
// 	delete []temp;
// 	for ( int i =n -1; i>= pos; i--){
// 		a[i+1] = a[i];
// 	}
// 	a[pos]=x;
// 	n++;
//}

void delete_element( int *&a, int &n, int pos){
	for ( int i =pos+1 ; i<n; i++){
		a[i-1] = a[i];
	}
	int *temp = new int [n];
	for ( int i = 0; i<n; i++){
		temp[i] = a[i];
	}
	delete []a;
	n--;
	a = new int [n];
	for ( int i =0; i<n; i++){
		a[i] = temp[i];
	}
	delete []temp;
	
}
int main (){
	int n;
	do{
		cout << "\nEnter the numbers of the elements of the array: ";
		cin >> n;
		if (n<= 0){
			cout << "\nPlease type n>0: ";
		}
	} while (n<=0);
	int *a = new int [n];
	cout << "\n\n\t\tINPUT ARRAY \n";
	Input_array(a,n);
	cout << "\n\n\t\tPRINT ARRAY \n";
	Print_array(a,n);

//    int x;
//    cout << "\nHay nhap phan tu can them: ";
//    cin >> x;
//    int pos;
//    cout << "\nHay nhap vi tri can them: ";
//    cin >> pos;
//    add_element(a,n,pos,x);
//    cout << "\n\n\t\tARRAY AFTER ADD ELEMENT \n";
//    Print_array(a,n);
    int vt;
   cout << "\nHay nhap vi tri can xoa: ";
   cin >> vt;
   delete_element(a,n,vt);
   cout << "\n\n\t\tARRAY AFTER DELETE \n";
   Print_array(a,n);
   cout << "a[4] = " << a[5];
    delete []a;
	system("pause");
	return 0;

}
