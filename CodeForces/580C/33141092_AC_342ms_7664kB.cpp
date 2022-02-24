#include<iostream>
#include<vector>
using namespace std;
vector<int>v[100005];
int n, m, x, y, arr1[100005], arr2[100005], i = 1, c, ans;
void dfs(int k) {
    arr2[k]++;
    int z = 0;
    if (arr1[k])
        arr1[k] += c;
    if (arr1[k] > m)
        return;
    for (int j = v[k].size(); j--;)
        if (!arr2[v[k][j]])
            z = 1, c = arr1[k], dfs(v[k][j]);
    if (!z) 
    {
       ans++;
        return; 
    }
}
main() {
    cin >> n >> m;
    for (; i <= n; i++)
        cin >> arr1[i];
    for (i = 1; i < n; i++)
        cin >> x >> y, v[x].push_back(y), v[y].push_back(x);
    dfs(1);
    cout << ans;
}