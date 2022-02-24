#include<iostream>
using namespace std;
long long n;
int main()
{
    cin >> n;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << (n - i) / 2 + 1;
            return 0;
        }
    }
    cout << 1;
    return 0;
}
