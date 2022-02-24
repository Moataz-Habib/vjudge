#include<iostream>
using namespace std;
int n,a,b,c,d,i;
int main()
{
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>c;
		if(a==1&&b==0&&c==1)
        {
            c=0;d++;
        }
		a=b;b=c;
	}
	cout<<d<<endl;
}