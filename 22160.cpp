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
    n = n - 1;
    double sqrt_5 = sqrt(5);
    double result = (1 / sqrt_5) * pow((1+sqrt_5)/2 , n+1) -  (1 / sqrt_5) * pow((1-sqrt_5)/2 , n+1); 
 
    printf("%.0f\n", result);
    return 0;    
}
