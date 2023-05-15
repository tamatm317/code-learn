// int is_lower(char c) : Kiểm tra 1 kí tự có phải là chữ in thường hay không. Nếu đúng trả về 1, sai trả về 0.
// int is_upper(char c) : Kiểm tra 1 kí tự có phải là chữ in hoa hay không?
// int is_alphar(char c) : Kiểm tra 1 kí tự có phải là chữ cái hay không?
// int is_digit(char c ) : Kiểm tra 1 kí tự có phải là kí tự hay không?
// char to_lower(char c ) : Trả về dạng in thường của kí tự c
// char to_upper(char c ) : Trả về dạng in hoa của kí tự c
// int strlen(char c ) : Trả về chiều dài xâu
// string strlwr(string c) : Viết thường tất cả các kí tự trong xâu
// string strupr(string c) : Viết hoa tất cả các kí tự trong xâu
// int strcmp(string a, string b) : So sánh 2 xâu a và b theo thứ tự từ điển, nếu a>b trả về 1, a=b trả về 0, a < b trả về -1
// int strcmp(string a,string b) : So sánh 2 xâu a và b theo thứ tự từ điển không phân biệt hoa thường, nếu a>b trả về 1, a=b trả về 0, a < b trả về -1
// long long atoll(string a) : Chuyển 1 xâu kí tự số thành số nguyên long long
// string strrev(string c) : Viết hàm đảo ngược 1 xâu
#include<cstring>
#include<iostream> 
using namespace std;
string strlwe(string n){
	for(int i = 0; i<n.length();++i){
		if(n[i]>=65&&n[i]<=90){
			n[i]+=32;
		}
	}
	return n;
}
int main(){
	string n;
	getline(cin,n);
	cout << strlwe(n);
}