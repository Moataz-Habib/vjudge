#include<iostream>
using namespace std;
int n, m, a;
int main()
{
	cin >> n >> m;
	while (n < m)
		m % 2 ? m++ : m /= 2, a++;
	cout << a + n - m;
}
