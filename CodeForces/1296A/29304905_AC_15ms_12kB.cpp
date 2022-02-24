#include<iostream>
using namespace std;
int main() {
    int t, x;
    cin >> t;
    while (t--) {
        int n, even = 0, odd = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (x % 2 == 0)
                even++;
            else
                odd++;
        }
        //print YES if odd is an  odd number  // 1 4 4 4  odd=1 is and odd number the sum=13-->(array with odd sum)
        //or odd an even >0(There are numbers that existed we can replace them) and odd is an even number 
        // 2 3 4 5 the sum =14  3 and 5  repeated two times (odd=2) we can replace any even number 
        //like 2 and  4 and make it odd --> replace 2 to 3 we get 3 3 4 5 the sum =15 -->15(array with odd sum)
        if (odd % 2 == 1 || (odd && even > 0 && (odd % 2 == 0)))
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
}
