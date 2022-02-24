#include<iostream>
using namespace std;
long long n ;
int cnt = 0;
void lucky(long long num) {

	if (num > n) return;
	else if (num > 0 && num <= n)
		cnt++;
	lucky(num * 10 + 4);
	lucky(num * 10 + 7);
}
int main() {
	cin >> n;
	lucky(0);
	cout << cnt;
	return 0;
}