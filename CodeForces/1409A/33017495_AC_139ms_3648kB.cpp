#include<bits/stdc++.h>
using namespace std;
long long t,a,b; 
int main(){
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout<<(abs(a-b)+9)/10<<endl;
	}
}