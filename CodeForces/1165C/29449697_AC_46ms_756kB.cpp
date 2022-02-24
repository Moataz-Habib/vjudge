#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long n;
    string s1, s2;
    cin >> n >> s1;                                              //b d b b c  
    long long  i = 0;                                           // i=0     s[0]!=s[1]  b!=d   true
    while (i < n - 1)                                      //s2+=s[i] s2=b s2+=[i+1]  s2=bd  i++   i=1  i++  i=2 ( increase i by 2 if s[i]!=s[i+1])
    {                                                            // s[2]!=s[3]  b!=b false   i++  i=3    ( increase i by 1 if s[i]==s[i+1])
        if (s1[i] != s1[i + 1])                                  //s[3]!=s[4]   b!=c  true  s2+=bdb  s2+=bdbc        
        {
            s2 += s1[i];
            s2 += s1[i + 1];
            i++;
        }
        i++;
    }
    cout << n - s2.size() << endl << s2 << endl;
}