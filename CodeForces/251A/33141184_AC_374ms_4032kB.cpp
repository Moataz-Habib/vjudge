#include<iostream>
using namespace std;
int main()
{
	int n, d;
	cin >> n >> d;
	int arr[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	long long ans = 0;
	int j = 0;
	for (int i = 0; i < n; i++) {
		while (arr[i] - arr[j] > d)
			j++;
		ans += (long long)(i - j) * (i - j - 1) / 2;
	}
	cout << ans << endl;
}
