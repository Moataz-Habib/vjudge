#include<iostream>
using namespace std; 
#include<algorithm>
int arr[300000], n;
long long ans=0;
int main() {
	cin >> n;
	for ( int i = 1;  i <=n; i++)
	{
		cin >> arr[i];
	}
	sort(arr+1, arr + n+1);
	for (int i = 1; i <= n; i++)
	{
		ans += abs(i - arr[i]);
	}
	cout << ans << endl;

	return 0;
}