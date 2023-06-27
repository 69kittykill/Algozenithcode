#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,i=0,num=0;
    cin>>n;
    ll arr[n];
    while(i<n){cin>>arr[i];i++;}
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1]){num=num+arr[i]-arr[i+1];
        arr[i+1]=arr[i];}

    }
    cout<<num<<endl;

}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}