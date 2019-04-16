#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    
    int weight;
    cin >> weight;

    if (weight == 1 || weight == 2 || weight % 2 == 1)
        cout << "NO, you can't divide the watermelon into two even parts." << endl;
    else 
        cout << "YES, you can divide the watermelon into two even parts." << endl;
    return 0;    
}
