#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[1000];
	int n, i, num = 0;
	double sum = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	sort(arr, arr + n);
	for (i = 0; sum / n < 4.5; i++)
	{
		sum += 5 -arr[i];
		arr[i] = 5; 
			num++;
	}
	cout << num;
}
