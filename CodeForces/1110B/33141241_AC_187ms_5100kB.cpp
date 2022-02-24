#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr[100005];
int main() {
	int n, m, k;
	cin >> n >> m >> k;
	vector<int>v;
	cin >> arr[1];
	for (int i = 2; i <= n; i++) {
		cin >> arr[i];
		v.push_back(arr[i] - arr[i - 1]);
	}
	sort(v.begin(), v.end());
	int ans = k;
	for (int i = 0; i < n - k; i++) {
		ans += v[i];
	}
	cout << ans << endl;
}