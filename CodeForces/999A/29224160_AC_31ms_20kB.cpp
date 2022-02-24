#include<iostream>
#include<algorithm>
using namespace std;
int main() {
 
	int n, k,arr[101],i,j;
	cin >> n >> k;
	for (i = 1; i <= n; i++)
	{
		cin >> arr[i];
	}
		for ( i = 1; i <=n; i++)
		{
			if (arr[i] > k) {
				break;
			}
		}
		i--;
		for ( j = n; j >1; j--)
		{
			if (arr[j] > k) {
				break;
			}
		}
        j++;
	     cout <<min(n , i+ n- j+1);
	return 0;
}
