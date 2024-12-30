#include <iostream>

using namespace std;

void solve() 
{
    string input_str;
    cin >> input_str;

    int hour = (input_str[0] - '0') * 10 + (input_str[1] - '0');
    int minute = (input_str[3] - '0') * 10 + (input_str[4] - '0');

    if (hour >= 12)
    {
        if (hour > 12) hour -= 12;
        cout << (hour < 10 ? "0" : "") << hour << ':' << (minute < 10 ? "0" : "") << minute << " PM" << endl;
        return;
    }

    if (hour == 0) hour += 12;
    cout << (hour < 10 ? "0" : "") << hour << ':' << (minute < 10 ? "0" : "") << minute << " AM" << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);

    int num_test_cases;
    cin >> num_test_cases;

    while (num_test_cases--) solve();
}