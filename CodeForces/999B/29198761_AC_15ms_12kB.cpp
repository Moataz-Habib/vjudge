#include<iostream>
#include<algorithm>
using namespace std;
int n;
string s;
int main() {
	cin >> n >> s;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			reverse(s.begin(), s.begin() + i);
			
		}
	}
	cout << s << endl;
	return 0;
}