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
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] <<" ";

	}

	return 0;
}