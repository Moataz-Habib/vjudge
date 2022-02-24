#include<iostream>
using namespace std;
int n, cnt, k, mx;
main() {
	cin >> n;
	int arr[n + 1];
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 1; i <= n; i++) {
		cnt = 1;
		k = arr[i];
		while (k > 0)
		{
			k = arr[k];
			cnt++;
		}
		mx = max(mx, cnt);
	}
	cout << mx;
}