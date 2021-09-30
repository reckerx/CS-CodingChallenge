#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = (n - 1) / 3;
    int y = 2 * x;
    cout << ((x + y / 2) + 1) << endl;
    return 0;
}
