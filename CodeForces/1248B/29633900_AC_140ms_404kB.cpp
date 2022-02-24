#include<iostream>
#include<algorithm>
using namespace std;
int n, a[100001];;
long long x=0,y=0;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (i < n / 2)
			x += a[i];
		else
			y += a[i];
	}
	cout << x * x + y * y << endl;
	return 0;
}
