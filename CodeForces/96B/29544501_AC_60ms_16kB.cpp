#include<iostream> 
#include<algorithm>
using namespace std;
long long mn = 1e12;
long long x;
void lucky(long long num, int c4,int c7) {
    if (num > 1e11) return;                                               
    if (num >= x && c4 == c7) {                                              
        mn = min(mn, num);                                         
    }
    lucky(num * 10 + 4, c4+1,c7);            //0 -------> 4,1,0  ------->44,2,0
    lucky(num * 10 + 7, c4, c7+1);           //                  ------->47,1,1
                                            //0 --------> 7,0,1  ------->74,1,1
}                                          //                    ------->77,0,2
int main()
{
    cin >> x;
    lucky(0,0,0);
    cout << mn;
    return 0;
}