#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll pow(ll n)
{
    if(ceil(log2(n)) == floor(log2(n))) return 1;
    else return 0;
}
void solve()
{
    int n;
    cin>>n;
    ll arr[n],count=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(pow(arr[i]+arr[j])==1)count++;
        }

    }
    cout<<count<<endl;

}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}