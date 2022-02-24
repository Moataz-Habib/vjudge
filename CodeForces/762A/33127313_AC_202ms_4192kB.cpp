#include<iostream>
#include <vector>
#include<algorithm>
using namespace std;
int main() {
	long long n, k;
	cin >> n >> k;
	vector <long long> v;
	for (long long i = 1; i * i <= n; i++) {
		if (n % i == 0) {
			v.push_back(i);
			if (i * i != n) v.push_back(n / i);
		}
	}
	sort(v.begin(), v.end());
	if (v.size() < k)
		cout << "-1";
	else cout << v[k - 1];
}
