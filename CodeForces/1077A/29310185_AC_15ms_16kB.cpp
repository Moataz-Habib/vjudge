#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;
    long long   a, b, k; 
    while (t--) {
        
        cin >> a >> b >> k;         // frog jumps  from current position to +a then -b 
        cout << (k + 1) / 2 * a    - k / 2 * b << endl; // (k+1)/2 //(+1) get from (Denominator -1) (2-1)to rounded value of a
        //  example  k=3   a=5  b =2   
         // (3+1)/2 * 5 =10  jumps  to position a------> =10
        // 3/2 *2 =2 jumps  to position   b <---------- =2 
        // total after k jumps  =a-b =10-2 =8 
    }
    return 0;
}
