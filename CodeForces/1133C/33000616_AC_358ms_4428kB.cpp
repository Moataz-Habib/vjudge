#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  int m=1;
  for(int i=0;i<n;i++)
  {
    int z=upper_bound(a+i,a+n,a[i]+5)-a;
    m=max(m,z-i);
  }
  cout<<m;
}