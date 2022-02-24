#include<iostream>
using namespace std;

int n;
int arr[55];
int fin[1005];
int main() {
	cin >> n;
	 for (int i = 1; i <= n; i++) {
	 	cin >> arr[i];
	 }
	  int cnt = 0;
	for (int i = n; i >= 1; i--) {
		    bool appeared = false;
		for (int j = i + 1; j <= n; j++) {
			if (arr[i] == arr[j]) {
				appeared = true;
			}
		}
		if (appeared == false) {
			fin[cnt++] = arr[i];
		}
	}
	cout << cnt << endl;
	for (int i = cnt-1 ; i >= 0; i--) {
		cout << fin[i] << " ";
	}

	return 0;
}