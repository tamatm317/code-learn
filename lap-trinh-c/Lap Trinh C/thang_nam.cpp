#include <iostream >
using namespace std;

int main ()
{
    int month;
    int year;
    do
    {
        cout << "\nPlease type month: ";
        cin >> month;
        if (month <= 0 || month >12){
            cout << "\nPlease type mont more than 0 and less than 12";
        }
    } while ( month<=0 || month > 12);
    cout << "\nPlease type year: ";
    cin >> year;
    switch(month)
    {
        case 4 || 6 || 9 || 11 :
        {
            if ( month == 4){
                cout << "\nApril has 30 days.";
            }
            else if (month == 6)
            {
                cout << "\nJune has 30 days.";
            }
            if (month == 9)
            {
                cout << "\nSeptember has 30 days.";
            }
            if (month == 11)
            {
                cout << "\nNovember has 30 days.";
            }
        }
        case 2 :
        {
            int x = year;
            if ( x%4 == 0 && x%100 != 0 ) 
            {
                cout << "\nFebruary has 29 days.";
            }
            else if (x % 400 == 0){
                cout << "\nFebruary has 29 days.";
            }
                else{
                cout << "\nFebruary has 28 days.";
            }
        }
        default :
        {
            if ( month == 1)
            {
                cout << "\nJanuary has 31 days.";
            }
            else if (month == 3)
            {
                cout << "\nMarch has 31 days.";
            }
            if (month == 5)
            {
                cout << "\nMay has 31 days.";
            }
            if (month == 7)
            {
                cout << "\nJuly has 31 days.";
            }
            if (month == 8)
            {
                cout << "\nAugust has 31 days.";
            }
            if (month == 10)
            {
                cout << "\nOctober has 31 days.";
            }
            if (month == 12)
            {
                cout << "\nDecember has 31 days.";
            }
        }
    }
   system("pause");
   return 0;
}