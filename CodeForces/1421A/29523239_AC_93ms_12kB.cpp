#include<iostream>
using namespace std;
int main() {


	int t,a,b,x;
	cin >> t;
	while (t--)
	{
		cin >> a >> b;
		x = a & b;
		cout << (a ^ x) + (b ^ x)<<endl;
	}
	return 0;
}