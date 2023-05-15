#include <bits/stdc++.h>
using namespace std;
struct NhanVien
{
    string manv;
    string name;
    string birth;
    int salary;
};
// bool cmp(const NhanVien &a, const NhanVien &b)
// {
//     return a.salary < b.salary;
// }
// void edit_manv(vector<NhanVien> &nv, int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         string s = "NV";
//         stringstream ss;
//         ss << std::setw(4) << setfill('0') << i + 1;
//         nv[i].manv = s + ss.str();
//     }
// }
// void normalizeBirth(vector<NhanVien> &nv, int n)
// {
//     for (int i = 0; i < n; ++i)
//     {
//         string s = nv[i].name;
//         stringstream ss(s);
//         char delimiter;
//         int month, day, year;
//         ss >> day >> delimiter >> month >> delimiter >> year;
//         stringstream daySS, monthSS, yearSS;
//         daySS << std::setw(2) << setfill('0') << day;
//         monthSS << std::setw(2) << setfill('0') << month;
//         yearSS << std::setw(4) << setfill('0') << year;
//         nv[i].birth = daySS.str() + '/' + monthSS.str() + '/' + yearSS.str();
//     }
// }
void input_1_sv(NhanVien &nv)
{
    getline(cin, nv.name);
    cin >> nv.birth;
    // cin.ignore();
    cin >> nv.salary;
    // cin.ignore();
}
void input(vector<NhanVien> nv, int n)
{
    for (int i = 0; i < n; ++i)
    {
        input_1_sv(nv[i]);
        nv.push_back(nv[i]);
    }
}
void hienthi(vector<NhanVien> nv, int n)
{
    normalizeBirth(nv, n);
    // sort(nv.begin(), nv.end(), cmp);
    // edit_manv(nv, n);
    for (int i = 0; i < n; ++i)
    {
        cout << nv[i].manv << " " << nv[i].name << " " << nv[i].birth << " " << nv[i].salary << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    vector<NhanVien> v(n);
    input(v, n);
    hienthi(v, n);
}