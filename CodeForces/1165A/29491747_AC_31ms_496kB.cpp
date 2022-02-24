#include <iostream>
#include<algorithm>
using namespace std;
int main() {
	int n, x, y;
	string s;
	cin >> n >> x >> y>>s;
	reverse(s.begin(), s.end());
	int cnt = 0;
	for (int i = 0; i < x; i++) {
		if (i == y && s[i] == '0') 
			cnt++;
		else if (i != y && s[i] == '1')
			cnt++;
	}
	cout << cnt << endl;
	return 0;
}
