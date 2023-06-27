#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,b,count=0;
    cin>>n>>b;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr, arr + n);
    
    int i=0;
    for(int i=0;i<n;i++)
    {
        if(b<=0)break;
        b=b-arr[i];
        count++;
    }
    if(b<0)
    {
    cout<<count-1<<endl;
    }
    else cout<<count<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}