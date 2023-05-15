// // Câu 1: Cho số tự nhiên N và số nguyên tố P . Nhiệm vụ của bạn là tìm số x lớn nhất để N! 
// // chia hết cho p^x. 
// // Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 32. 
// // T,N,p thỏa mãn rang buộc : 1≤T≤100; 1≤N≤10^5; 2≤p≤5000;

#include <bits/stdc++.h>
using namespace std;
// int count (int n, int p){
// 	int count = 0;
// 	for (int i = p; i<=n; i+=p){
// 		int temp = i;
// 		while(!(temp%p)){
// 			++count;
// 			temp /=p;
// 		}
// 	}
// 	return count;
// }
int count (int n, int p){
	int count = 0;
	for(int i = p; i<=n; i*=p){
		count +=n/i;
	}
	return count;
}
int main(){
	int n,p;
	cin >> n >> p;
	cout << count(n,p);
}