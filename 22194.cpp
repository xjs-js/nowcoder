#include <bits/stdc++.h>

using namespace std;

bool is_true(int i)
{
    int a = i / 1000;
    int b = (i / 100) % 10;
    int c = (i / 10) % 10;
    int d = i % 10;
    
    int ab = a*10 + b;
    int cd = c*10 + d;
    
    if ((ab + cd) * (ab + cd) == i)
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

    int n;
    cin >> n;

    for (int i = 1000; i <= n; ++i)
        if (is_true(i))
            cout << i << endl;

    return 0;    
}
