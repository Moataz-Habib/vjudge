#include<iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int num, arr[6], cnt = 0, n = 1;
         cin>>num;
        for (int i = 1; i < 6; i++){
			arr[i] = num % 10;
			num /= 10;
			if (arr[i] != 0)
				cnt++; 
		}
               cout<<cnt<<endl;

           for (int i = 1; i < 6; i++){

			if (arr[i] != 0)
				cout<< arr[i] * n<<" ";
			     n *= 10;
		     }
		   cout << endl;
	}
	return 0;
}