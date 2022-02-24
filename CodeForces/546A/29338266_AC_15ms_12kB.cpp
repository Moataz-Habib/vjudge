#include<iostream>
using namespace std;
int main() {

	int k, n, w,i;
	cin >> k >> n >> w;
	int sum = 0;                            // k    n     w
	for ( i = 1; i <= w; i++)               // 3    17    4
	{                                      //  sum+=k*i ---> 3*1 =3
		sum+=i * k;                        //           ---> 3*2 =6
		                                   //           ---> 3*3 =9    
	}                                     //            ---> 3*4 =12    sum=30  the price of 4 bananas
	if (sum > n)                          //  have 17 dollars  he must borrow money --> sum - n =30 -17= 13 dollars
		cout << sum - n;
	else                                   
		cout << 0;           //he doesn't have to borrow money

	return 0;                            

}
