#include <bits/stdc++.h>
using namespace std;
struct sinhvien
{
    string masv;
    string name;
    string class_;
    string birth;
    float GPA;
    string email;
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
        stringstream ss(s);
        string word;
        string newstr;
        while (ss >> word)
        {
            word[0] = toupper(word[0]);
            newstr += word + " ";
        }
        // email.push_back("@gmail.com");
        size_t lastNonspace = s.find_last_not_of(' ');
        if (lastNonspace != string::npos)
        {
            newstr.erase(lastNonspace + 1);
        }
        sv[i].name = newstr;
    }
}
void email(string s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        s[i] = tolower(s[i]);
    }
    vector<string> v;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
        v.push_back(temp);
    cout << v.back();
    for (int i = 0; i < v.size() - 1; ++i)
    {
        cout << v[i][0];
    }
    cout << "@gmail.com";
}
void normalizeDate(sinhvien sv[], int num)
{
    for (int i = 0; i < num; ++i)
    {
        string s = sv[i].birth;
        stringstream ss(s);
        int day, month, year;
        char delimiter;
        ss >> day >> delimiter >> month >> delimiter >> year;
        stringstream daySS, monthSS, yearSS;
        daySS << setw(2) << setfill('0') << day;
        monthSS << setw(2) << setfill('0') << month;
        yearSS << setw(4) << setfill('0') << year;
        sv[i].birth = daySS.str() + '/' + monthSS.str() + '/' + yearSS.str();
    }
}
void input_1_sv(sinhvien &sv)
{
    cin >> sv.masv;
    cin.ignore();
    getline(cin, sv.name);
    cin >> sv.class_;
    cin >> sv.birth;
    // cin.ignore();
    cin >> sv.GPA;
}
void input_sv(sinhvien sv[], int num)
{
    for (int i = 0; i < num; ++i)
    {
        input_1_sv(sv[i]);
    }
}
void output(sinhvien sv[], int num)
{
    normalizeDate(sv, num);
    normalizeName(sv, num);
    for (int i = 0; i < num; ++i)
    {
        cout << sv[i].masv << " " << sv[i].name << " " << sv[i].class_ << " " << sv[i].birth;
        cout << " " << setprecision(2) << fixed << sv[i].GPA << " ";
        email(sv[i].name);
        cout << endl;
    }
}
int main()
{
    int num_sv;
    cin >> num_sv;
    sinhvien sv[num_sv];
    input_sv(sv, num_sv);
    output(sv, num_sv);
}