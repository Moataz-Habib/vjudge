#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    for (long long i = sqrt(n); i >= 1; i--)
    {
        if (n % i == 0 && __gcd(i, (n / i)) == 1)
        {
            cout << i << " " << (n / i);
            break;
        }
    }
}