#include <iostream>
#include<algorithm>

using namespace std;

int main()
{

	int n, arr[100000];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];         //1 3 7 3
	}
	sort(arr, arr + n); // sort array   1 3 3 7      
	cout << min (arr[n - 2] - arr[0],arr[n - 1] - arr[1]);

	// arr[n - 2] - arr[0]   //   1     3      3        7 
	//                     //   arr[0]      arr[n-2]    in this case we wil remove biggset number arr[n] (7)
	                       // then  subtract  arr[n-2]  -  arr[0]  3 - 1 =2   


	// arr[n - 1] - arr[1]  //  2      6      8      10 
	                        //       arr[1]        arr[n-1] in this case we wil remove smallest number arr[0] (2)
	                       // then  subtract  arr[n-1]  -  arr[1]  10 - 6 =4

	// use min to print the small result    arr[n - 2] - arr[0]  or   arr[n - 1] - arr[1]

 



	return 0;
}




