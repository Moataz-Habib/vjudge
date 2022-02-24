#include<iostream>
#include<algorithm>
using namespace std;
const int N = 1e5 + 5;
int n, k, arr[N], i, mn, pos = 0, sum = 0;
int main()
{
	cin >> n >> k;
	for (i = 0; i < n; i++)
		cin >> arr[i];
	sort(arr, arr + n);
	while (k--)
	{
		for (i = pos; i < n; i++) {
			if (arr[i] - sum)
			{
				mn = arr[i] - sum;
				sum += mn;
				pos = i;
				break;
			}
		}
		if (i == n) 
			mn = 0, pos = n;
		cout << mn << endl;
	}
}