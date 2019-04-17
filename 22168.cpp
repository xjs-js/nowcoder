#include <bits/stdc++.h>

using namespace std;

int calc(int n)
{
    int sum = 0;
    while (n) {
        sum = sum + n%10;
        n = n / 10;   
    }
    return sum;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int x, y;
    cin >> x >> y;

    int count = 0;
    for (int i = x; i <= y; ++i) {
        if (calc(i) % 5 == 0)
            ++count;    
    }
    cout << count << endl;
    return 0;    
}


