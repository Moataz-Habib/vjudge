#include<iostream>
using namespace std;
int main() {

	int p,v,t;
	int T, c = 0;
	cin >> T;

	while (T--)
	{
		int sum = 0;
		cin >> p >> v >> t;
	 	sum += p + v + t;
		if (sum >= 2)
			
		c++;
	}
	cout << c << endl;
		return 0;
	}