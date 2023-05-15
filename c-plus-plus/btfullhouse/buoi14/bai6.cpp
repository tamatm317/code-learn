
#include <bits/stdc++.h>
using namespace std;
struct sinhvien
{
    string ma_sv;
    string name;
    string class_;
    string date;
    float GPA;
};
void normalizeName(sinhvien sv[], int num)
{
    for (int i = 0; i < num; ++i)
    {
        string s = sv[i].name;
        for (int i = 0; i < s.size(); ++i)
        {
            s[i] = tolower(s[i]);
        }
        string newstr;
        stringstream ss(s);
        string word;
        // string newstr;
        while (ss >> word)
        {
            word[0] = toupper(word[0]);
            newstr += word + " ";
        }
        size_t lastNonSpace = newstr.find_last_not_of(' ');
        if (lastNonSpace != string::npos)
        {
            newstr.erase(lastNonSpace + 1);
        }
        sv[i].name = newstr;
    }
}
void normalizeDate(sinhvien sv[], int num)
{
    for (int i = 0; i < num; ++i)
    {
        string s = sv[i].date;
        stringstream ss(s);
        int day, month, year;
        char delimiter;
        ss >> day >> delimiter >> month >> delimiter >> year;
        stringstream daySS, monthSS, yearSS;
        daySS << std::setw(2) << std::setfill('0') << day;
        monthSS << std::setw(2) << std::setfill('0') << month;
        yearSS << setw(4) << setfill('0') << year;
        sv[i].date = daySS.str() + "/" + monthSS.str() + "/" + yearSS.str();
    }
}
void input_1_sv(sinhvien &sv)
{
    cin >> sv.ma_sv;
    cin.ignore();
    getline(cin, sv.name);
    // cin.ignore();
    cin >> sv.class_;
    // cin.ignore();
    cin >> sv.date;
    // cin.ignore();
    cin >> sv.GPA;
    // cin.ignore();
}
void input_sv(sinhvien sv[], int num)
{
    for (int i = 0; i < num; ++i)
    {
        input_1_sv(sv[i]);
    }
}
// bool cmp(const sinhvien &a, const sinhvien &b)
// {
//     return a.GPA > b.GPA;
// }
void output(sinhvien sv[], int num, int n)
{
    normalizeName(sv, num);
    normalizeDate(sv, num);
    // sort(sv, sv + num, cmp);
    for (int i = 1; i <= n; ++i)
    {
        string s;
        cin >> s;
        for (int i = 0; i < num; ++i)
        {
            if (s == sv[i].class_)
                cout << sv[i].ma_sv << " " << sv[i].name << " " << sv[i].class_ << " " << sv[i].date << " " << setprecision(2) << fixed << sv[i].GPA << endl;
        }
    }
}
int main()
{
    int val_sinhvien;
    int truyvan;
    cin >> val_sinhvien;
    sinhvien sv[val_sinhvien];
    input_sv(sv, val_sinhvien);
    cin >> truyvan;
    output(sv, val_sinhvien, truyvan);
}