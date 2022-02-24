#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int m, n;
		cin >> m >> n;
		vector<int>a(m), b(n), temp(m);
		for (int i = 0; i < m; i++)
			cin >> a[i];
		for (int i = 0; i < n; i++)
			cin >> b[i];
		temp = a;
		sort(temp.begin(), temp.end());
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (a[b[j] - 1] > a[b[j]])
					swap(a[b[j] - 1], a[b[j]]);
			}
		}
		if (temp != a)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
