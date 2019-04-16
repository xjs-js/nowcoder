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

    int last_digit = n % 10;        // 个位
    if (last_digit == 0 ) {         // 直接输出
        cout << n << endl;
    } else if (last_digit >= 5) {   // 向上进
        int result = n - last_digit + 10;
        cout << result << endl;
    } else {                        // 向下舍
        int result = n - last_digit;
        cout << result << endl;
    }
    return 0;    
}
