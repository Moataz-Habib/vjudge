#include<iostream>
using namespace std;
int main() {
	int n;                      //b aa bbb
	string s;                   //0 1  3
	cin >> n >> s;               //bab
	int i = 0, j = 0;
	while (i < n)
	{
		cout << s[i];                              //i=0  j=0    cout<<s[0]= b
		j++;                                      // i=1  j=1    cout<<s[1]= a
		i += j;                                   // i=3  j=2    cout<<s[3]= b    

	}
	return 0;
}
