#include <iostream>
#include <algorithm>
using namespace std;
int n, k, arr[200005], m, i, l;
int main() {
	cin >> n >> k;
	m = n / 2, l = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	for (i = arr[m]; k > 0; i++) {
		while (i == arr[m + 1])
			m++;
		k -= m - n / 2 + 1;
	}
	if (k == 0)
		cout << i << endl;
	else
		cout << i - 1 << endl;
}