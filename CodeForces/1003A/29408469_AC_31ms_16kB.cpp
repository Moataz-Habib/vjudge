#include <iostream>
using namespace std;
int freq[101];                                          //1 2 4 3 3 2 2  
int main() {
	int n,value;                                         // 0 1 2 3 4 
	cin>>n;                                      // freq=   0 1 3 2 1      
	for (int i = 0; i < n; i++)               
	{                                                   // freq[3]>1   
		cin >> value;                                   // max = 3
		freq[value]++;	
	}
	int max = 1;
	for (int  i = 0; i <101; i++)
	{                    
		if (freq[i] > max)                              
			max = freq[i];                              
	}                                                  
	cout << max;
	return 0;
}
