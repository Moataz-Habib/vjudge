#include<iostream>
#include<algorithm>
using namespace std;
int n, arr1[100005], arr2[2];
int main() {
	int i;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> arr1[i];
		arr2[arr1[i] % 2] = 1;
	}
	if (arr2[0] && arr2[1]) sort(arr1, arr1 + n);
	for (i = 0; i < n; i++) {
		cout << arr1[i] << " ";
	}
}
