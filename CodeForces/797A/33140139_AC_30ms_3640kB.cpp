#include<iostream>
#include<vector>
using namespace std;
int main() {
	int n, k, m = 2;
	cin >> n >> k;
	vector<int> v;
	while (m <= n && k > 0) {
		if (k == 1) m = n;
		if (n % m == 0) {
			n /= m;
			v.push_back(m);
			k--;
		}
		else m++;
	}
	if (k == 0) 
		for (int c : v)
			cout << c << " ";
	else cout << -1;
}