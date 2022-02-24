#include <iostream>
using namespace std;

int main() {
    int n;                                                  // 1 
    cin >> n;                                              // 1*1 > 1(false) 
    if (n == 1)                                            // 1/1 < 1(false)
        cout << "-1";                       
    else
        cout << n << " " << n;                            
    return 0;                                                
}