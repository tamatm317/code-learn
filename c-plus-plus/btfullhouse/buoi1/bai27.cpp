#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int year = n/365;
	int temp = n%365;
	int week = temp/7;
	int day = temp - week*7;
	cout << year << " " << week << " " << day;
}