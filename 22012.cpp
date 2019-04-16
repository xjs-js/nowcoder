#include <bits/stdc++.h>

using namespace std;

bool is_leap_year(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        return true;
    else
        return false;    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int year;
    cin >> year;

    if (is_leap_year(year))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;    
}
