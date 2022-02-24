#include <iostream>
using namespace std;
int main() {
    string s;
    int k;
    cin >> k >> s;
    if (k >= s.length())
        cout << s << endl;
    else 
    cout << s.substr(0, k)<<"..."<<endl;
    return 0;                                                
}
