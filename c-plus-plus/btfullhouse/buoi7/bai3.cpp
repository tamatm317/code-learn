#include<iostream>
#include<cstring>
using namespace std;
void count(string n)
{
	int c_num = 0, c_char = 0, c_alpha = 0;
	for(int i=0; i<n.length(); i++){
		if((n[i]>=65&&n[i]<=90)||(n[i]>=97&&n[i]<=122)) c_alpha++;
		else if(n[i]>=48&&n[i]<=57)++c_num;
		else ++c_char;
	}
	cout << c_alpha << " " << c_num << " " << c_char;
}
int main(){
	string n;
	getline(cin,n);
	count(n);
	return 0;
}