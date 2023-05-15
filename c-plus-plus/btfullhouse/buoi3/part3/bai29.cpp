#include<iostream>
using namespace std;
// long long pascal(int n, int k){
// 	if(k>n-k) k = n-k;
// 	int s=1;
// 	for(int i = 0; i<k;++i){
// 		s *=(n-i)/(i);
// 	}
// 	return s;
// }
int factorial(int n) {
   int f;
    
   for(f = 1; n > 1; n--)
      f *= n;
       
   return f;
}
 
int ncr(int n, int r) {
   return factorial(n) / ( factorial(n-r) * factorial(r) );
}
int main(){
	int n;
	cin >> n;
	for(int i = 0;i<n;++i){
		for(int j = 0; j<=i;++j){
			cout << ncr(i,j)<<" ";
		}
		cout << endl;
	}
}