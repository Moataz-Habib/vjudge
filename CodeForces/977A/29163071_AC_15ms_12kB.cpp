#include <iostream>
using namespace std;
int main() {

	int k, n;
	cin >> k >> n;
	for (int i = 0; i < n; i++)
	{
		if (k % 10 == 0)
			k /= 10;
		else
			k--;


	}
	cout << k << endl;
	return 0;
}