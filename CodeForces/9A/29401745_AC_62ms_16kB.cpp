#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	{
		int x, y;
		cin >> x >> y;
		string s[6] = {"1/6","1/3","1/2","2/3","5/6","1/1"};
		int m = max(x, y);
		cout << s[6 - m];
	}
	return 0;
}