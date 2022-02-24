#include<iostream>
using namespace std;
int main() {

	string s;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> s;

		if (s.size() > 10)
			cout << s.substr(0, 1) << s.size() - 2 << s.substr(s.size() - 1, 1) << endl;
		else
			cout << s<<endl;

	}
	
		return 0;
	}