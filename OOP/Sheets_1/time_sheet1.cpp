#include <iostream>
using namespace std;

class Time
{
private:
    long long hour{}, minutes{}, seconds{};

public:
    Time(long long hr, long long min, long long sec) : hour(hr), minutes(min), seconds(sec) {}
    // setters
    void const setDate(long long h, long long m, long long s)
    {
        hour = h;
        minutes = m;
        seconds = s;
    }
    // getters
    long long getseconds() const
    {
        return seconds;
    }
    long long gethour() const
    {
        return hour;
    }
    long long getminutes() const
    {
        return minutes;
    }
    // is valid time??
    bool isValidTime() const
    {
        // Check if the hour is valid
        if (hour < 0 || hour > 23)
            return false;

        // Check if the minutes are valid
        if (minutes < 0 || minutes > 59)
            return false;

        // Check if the seconds are valid
        if (seconds < 0 || seconds > 59)
            return false;

        return true;
    }

    // choose
    void const show_any()
    {
        cout << "1. hour, minutes, seconds\n";
        cout << "2. minutes, hour\n";
        cout << "3. seconds, minutes\n";
    }
    // print
    void const print_time(int choose)
    {
        if (choose == 1)
            cout << hour << ", " << minutes << ", " << seconds << "\n";
        else if (choose == 2)
            cout << minutes << ", " << hour << "\n";
        else if (choose == 3)
            cout << seconds << ", " << minutes << "\n";
        else
            cout << "Invalid choose\n try again!!\n";
    }
    ~Time() = default;
};

int main()
{
    Time time(2024, 1, 1);
    int x{};
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        else
        {
            time.show_any();
            time.print_time(x);
        }
    }

    return 0;
}
