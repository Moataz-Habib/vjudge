#include<iostream>
using namespace std;
int cnt[105], freq[105];
int main()
{
    int n, k, j = 0;
    cin>>n>>k;
for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (freq[x]==0)
        cnt[j++] = i;
        freq[x]++;
    }
if (j<k)
    cout << "NO";
    else
    {
    cout << "YES"<<endl;
    for (int i = 0; i < k; i++)
        cout << cnt[i] <<" ";
    }
    return 0;
}