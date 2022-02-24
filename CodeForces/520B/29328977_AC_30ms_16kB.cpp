#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int ans = 0;
	while (n != m) {                        // n     m
		if (n > m || (m % 2 == 1))          // 4     6    n < m  and  m is even 
			m++;                           //  4     3           ans = 1 ;    m is odd m++;
		else m /= 2;                       //  4     4           ans = 2 ;    4 == 4      cout<< 2
		ans++;                                  
	}                                     
	cout << ans;                         
}                                      // n      m
                                       // 10     1    n > m   m++;  
									   // 10     2    n > m   m++;  ans=1;
									   // 10     3    n > m   m++;  ans=2;
									   // 10     4    n > m   m++;  ans=3;
									   // 10     5    n > m   m++;  ans=4;
									   // 10     6    n > m   m++;  ans=5;
									   // 10     7    n > m   m++;  ans=6;
									   // 10     8    n > m   m++;  ans=7;
									   // 10     9    n > m   m++;  ans=8;
									   // 10     10   n > m   m++;  ans=9;    10==10    cout<< 9
									   
