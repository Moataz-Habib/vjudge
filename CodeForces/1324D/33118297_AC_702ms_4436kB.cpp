#include <iostream>
#include <algorithm>
using namespace std;
int  arr[200005], r;
long long ans;
int main()
{
	int n;
	cin >> n;
	r = n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	for (int i = 1; i <= n; i++) {
		int b;
		cin >> b;
		arr[i] -= b;
	}
	sort(arr + 1, arr + n + 1);
	for (int l = 1; l <= n; l++)
	{
		while (arr[l] + arr[r] > 0)
			r--;
		ans += n - max(l, r);
	}
	cout << ans;
}
