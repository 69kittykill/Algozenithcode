#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,flag=1;
    cin>>n;
    ll a =sqrt(n);
    // cout<<a;
        if(n==1)flag=0;
        else if(n==2)flag=1;
        else if(n==3)flag=1;
        if(n>2){

    for(ll i=2;i<=a;i++)
    {
        if(n%i==0)flag=0;
    }
        }
    if(flag==1)cout<<"YES"<<endl;
    if(flag==0)cout<<"NO"<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}