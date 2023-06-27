#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool comp( pair<string,int> a, pair<string,int>b)
{
    return (a.second < b.second);
}
void solve()
{
    int n;
    cin>>n;
    pair<string,int> arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i].first>>arr[i].second;
    }
    sort(arr, arr +n,comp);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}