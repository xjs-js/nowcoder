#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;


    int n;
    cin >> n;
    
    int times = n / 7;

    if (times == 0) 
        cout << 0 << endl;
    else {
        int result = 0;
        for (int i = 1; i <= times; ++i)
            result = result + i * 7;
        cout << result << endl;
    }
    return 0;    
}
