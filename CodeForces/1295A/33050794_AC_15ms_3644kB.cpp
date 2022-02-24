#include<iostream>
using namespace std;
int main() {
	int t;cin>>t;
while(t--) {
		int n;
                cin>>n;
		string s="";
		while(n>3)
                 s+="1",n-=2;
		if(n==2)s+="1";
                else s="7"+s;
		cout<<s<<endl;
	}
}