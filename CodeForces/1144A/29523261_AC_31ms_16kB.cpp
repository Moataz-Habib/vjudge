#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	

	string s;
	int t;
	cin >> t;
	while (t--)
	{
		cin >> s;
		sort(s.begin(),s.end());

	
	bool o=true;
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i - 1] + 1 != s[i])
			{
			    o = false;
			}
	}
	if (o)
		cout << "Yes"<<endl;
	else
		cout << "No"<<endl;
}
	return 0;
}