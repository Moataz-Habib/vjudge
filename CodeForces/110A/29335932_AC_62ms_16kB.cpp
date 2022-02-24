#include<iostream>
using namespace std;
int main() {

	string s;
	cin >> s;
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)       //4 0 0 4 7  
	{                                        //1     1 1    cnt =3 
		if (s[i]=='4' || s[i]=='7')         // cnt !=4 || !=7  print NO      
		{
			cnt++;
		}
	}
	if (cnt == 4 || cnt ==7)              // 7 7 4 7 7 7 4
		cout << "YES";                    // 1 1 1 1 1 1 1  cnt =7  print YES
	else
		cout << "NO";                    
	return 0;                            // 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9
	                                     // 0 0 0 1 0 0 1 0 0 0 0 0 1 0 0 1 0 0    cnt =4 print YES

}
