#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

vector<int> permute(vector<vector<int>> &a, int n)
{
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int k = a[i][0] + a[i][1];
        v.emplace_back(k, i + 1);
    }

    sort(v.begin(), v.end());

    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        ans.push_back(v[i].second);
    }

    return ans;
}