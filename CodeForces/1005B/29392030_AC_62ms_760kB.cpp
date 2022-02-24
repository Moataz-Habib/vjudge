#include<iostream>
using namespace std;
int main() {

	string s1, s2;
	cin >> s1 >> s2;
	int i = s1.size() - 1;
	int j = s2.size() - 1;
	while (i>=0&&j>=0)
	{
		if (s1[i] != s2[j])
			break;
		i--;                                        //c o d e f o r c e s       y e s
		j--;                                        //0 1 2 3 4 5 6 7 8 9       0 1 2
													//              7           0         string array of characters zero based   
	}
	cout << i +j + 2;      // add 1 to i and j                 8           1     
	return 0;
}