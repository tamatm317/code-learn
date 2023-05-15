//Cho biết điểm kiểm tra Tin học của 1 em học sinh (2 con điểm hệ số 1, 
//1 con điểm hệ số 2, 1 con điểm hệ số 3).
// In ra Kết quả học tập môn Tin học của em đó. 
//Nếu điểm tổng kết 8≤ đạt kết quả Giỏi, <8 và ≥6,5 đạt kết quả Khá, 
//5≤ và <6,5 đạt kết quả Trung Bình, <5 đạt kết quả Yếu.
#include<iostream>
using namespace std;
int main(){
	float a,b,c,d;
	cin >> a >> b >> c >> d ;
	float tb = (a+b+c*2+d*3)/7;
	if(tb>=8)cout << "GIOI";
	else if(tb<8&&tb>=6.5) cout << "KHA";
	else if(tb<6.5&&tb>=5) cout << "TRUNG BINH";
	else cout << "YEU";
}