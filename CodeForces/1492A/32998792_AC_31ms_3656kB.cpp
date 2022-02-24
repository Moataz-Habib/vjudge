#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, p;
        cin >> p >> b >> c >> a;

        cout << min(min((a - p % a) % a, (b - p % b) % b), (c - p % c) % c) << endl;
    }
    return 0;
}
