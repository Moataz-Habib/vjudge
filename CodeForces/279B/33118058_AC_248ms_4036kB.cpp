#include <iostream>
using namespace std;
int sum[100005], r, m, x;
int main() {
	int n, t;
	cin >> n >> t;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		sum[i] = sum[i - 1] + x;
		if (sum[i] - sum[m] > t) m++;
		r = max((i - m), r);
	}
	cout << r;
}