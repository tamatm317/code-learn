// Cho hai số L,R. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng 
//ba ước số trong khoảng [L,R]. Ví dụ L=1,R=10 , ta có kết quả là
// 2 vì chỉ có số 4 và 9 là có đúng 3 ước số.
// Dữ liệu vào:
// Dòng đầu tiên đưa vào số lượng test T.
// Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số N.
// T,N thỏa mãn ràng buộc 1≤T≤100 ; 1≤N≤1012.
// Dữ liệu ra:
// Đưa ra kết quả mỗi test theo từng dòng.
/* ý tường: sàn số nguyên tố: duyệt từ sqrt(a)->sqrt(b), nếu nó là số nguyên tố
vd: a = 5, b = 10, sẽ sàng từ cận trên của sqrt(5) -> sqrt(10) vì nếu ko làm 
tròn sqrt(5) lên thì nó sẽ lấy giá trị là 2 -> t-prime = 4 mà 4 ko nằm trong 
[a,b]
làm hàm sàn để sàn các số nguyên tố đến 10^6
tạo mảng gồm 10^6 phần tử
*/
#include<iostream>
#include<cmath>
using namespace std;
int prime[1000001] ;
void sieve(){
	for(int i = 0; i<1000001; ++i) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i<=10000;++i){
		if(prime[i]){
			for(int j = i*i; j<1000001; j+=i){
				prime[j] = 0;
			}
		}
	}
}
// int prime(int n){
// 	for(int i = 2; i<=sqrt(n);++i){
// 		if(n%i==0) return 0;
// 	}
// 	return n>1;
// }
int main(){
	sieve();
	int test;
	cin >> test;
	for(int i= 1; i<=test;++i){
		long long a,b;
		int count = 0;
		cin >> a >> b;
		for(int j = ceil(sqrt(a)); j<=sqrt(b); ++j){
			if(prime[j]) ++count;
		}
		cout << count << endl;
	}
}