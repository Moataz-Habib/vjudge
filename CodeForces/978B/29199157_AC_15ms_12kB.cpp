#include<iostream>
using namespace std;
string a;
int cnt, n;

int main() {
	cin >> n >> a;
	for (int i = 0; i <n; i++) {
		if (a[i + 1] == 'x' && a[i + 2] == 'x' && a[i] == 'x') {
			cnt++;
		}
	}
	cout << cnt;
	return 0;
}