#include <iostream>
using namespace std;
int arr[100005],ans, n;
int main() {
	cin >> n;
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0)
			for ( int j = i; j <= n; j += i) 
				arr[j]++;
		if (arr[i] == 2)
			ans++;
	}
	cout << ans;
}
