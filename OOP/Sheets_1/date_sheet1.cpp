#include <iostream>
using namespace std;

class Date
{
private:
    long long year{}, month{}, day{};

public:
    Date(long long yr, long long mnth, long long dy) : year(yr), month(mnth), day(dy) {}
    // setters
    void const setDate(long long y, long long m, long long d)
    {
        year = y;
        month = m;
        day = d;
    }
    // getters
    long long getDay() const
    {
        return day;
    }
    long long getYear() const
    {
        return year;
    }
    long long getMonth() const
    {
        return month;
    }
    // is valid date??
    bool isValidDate() const
    {
        // Check if the month is valid
        if (month < 1 || month > 12)
            return false;

        // Check if the day is valid
        if (day < 1 || day > 31)
            return false;

        // Check for specific month-day combinations that are invalid
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
            return false;

        if (month == 2)
        {
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                if (day > 29)
                    return false;
            }
            else
            {
                if (day > 28)
                    return false;
            }
        }
    }
    // choose
    void const show_any()
    {
        cout << "1. Year, Month, Day\n";
        cout << "2. Month, Year\n";
        cout << "3. Day, Month\n";
    }
    // print
    void const print_date(int choose)
    {
        if (choose == 1)
            cout << year << ", " << month << ", " << day << "\n";
        else if (choose == 2)
            cout << month << ", " << year << "\n";
        else if (choose == 3)
            cout << day << ", " << month << "\n";
        else
            cout << "Invalid choose\n try again!!\n";
    }
    ~Date() = default;
};

int main()
{
    Date date(2024, 1, 1);
    int x{};
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        else
        {
            date.show_any();
            date.print_date(x);
        }
    }

    return 0;
}
