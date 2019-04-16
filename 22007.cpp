#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;

    int a, b;
    cin >> a >> b;
    
    int result = a + b;
    printf("%d+%d=%d\n", a, b, result);
    printf("%7d\n", a);
    printf("+%6d\n", b);
    printf("-------\n");
    printf("%7d\n", result);
    return 0;    
}
