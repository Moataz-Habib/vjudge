#include <iostream>
#include<math.h>
#include <iomanip>
using namespace std;
int n, r, result;

int fact(int n) {                                  //   using Combinations  n C r
    if (n == 0 || n == 1)
        return 1;
    else
        return n * fact(n - 1);
}
int main() {

    string s1, s2;                                     //string 1 ,string 2
    cin >> s1 >> s2;
    int a1 = 0, a2 = 0, b1 = 0, b2 = 0, q = 0;  //a1 number of(+),b1 number of (-) in s1 , a2 number of (+), b2 number of (-) in s2 , q number of (?) 
    int cnts1 = 0, cnts2 = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1[i] == '+')
            a1++;
        else if (s1[i] == '-')
            b1++;
    }
    for (int i = 0; i < s2.size(); i++)
    {
        if (s2[i] == '+')
            a2++;
        else if (s2[i] == '-')
            b2++;
        else if (s2[i] == '?')
            q++;
    }
    cnts1 = a1 - b1;                  
    cnts2 = a2 - b2;
    r = (cnts1 - cnts2 + q) / 2;         
    if (!q) {                  //?  doesn't exists 
        cnts1 == cnts2 ? cout << "1.000000000000" : cout << "0.000000000000";
    }
    else if (s1.size() == a1 && b2 > 0 || s1.size() == b1 && a2 > 0 || r < 0)   //s1.size() == a1 && b2 > 0 
    {                                                                           //++++++++++
        cout << "0.000000000000";                                               //++++-+++++
    }
    else {
        result = fact(q) / (fact(r) * fact(q - r));                              //s1.size() == b1 && a2 > 0
        cout << setprecision(12) << double(result) / double(pow(2, q));          //----------
                                                                                 //++++++++++
    }                                                                             
    return 0;                                                                    //r<0 
}                                                                                //----+++--
                                                                                 //-+?+++?--
