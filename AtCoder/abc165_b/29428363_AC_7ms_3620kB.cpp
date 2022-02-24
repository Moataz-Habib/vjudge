#include <iostream>
using namespace  std;
int main() {
	long long x, cnt, yen;
	yen = 100;
	cin >> x;
	cnt = 0;
	while (yen < x) {                           
		yen = yen + (yen / 100);  
		cnt++;                             
	}
	cout << cnt << endl;
}