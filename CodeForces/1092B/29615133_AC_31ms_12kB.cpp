#include<iostream>
using namespace std;
#include<algorithm>
int arr[105], n;
int ans = 0;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr , arr + n);
	for (int i = 0; i < n; i+=2)
	{
		ans += arr[i+1] - arr[i];
	}
	cout << ans << endl;

	return 0;
}