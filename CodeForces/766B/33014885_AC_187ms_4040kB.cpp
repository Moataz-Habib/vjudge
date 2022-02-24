#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	int f = 0;
	for (int i = 0; i < n -2; i++) {
		if (arr[i] + arr[i + 1] > arr[i + 2])
			f = 1;
	}
	if (f)
		cout << "YES";
	else
		cout << "NO";
}