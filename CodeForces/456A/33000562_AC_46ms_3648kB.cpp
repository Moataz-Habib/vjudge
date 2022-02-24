#include<iostream>
#include<algorithm>
#define endl '\n'
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t,a,b;
	cin >> t;
	while (t--) {
		cin >> a >> b;
		if (a < b) {
			cout << "Happy Alex";
			return 0;
		}
	}
	cout << "Poor Alex";
}