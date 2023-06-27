#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n,t,flag=1;
    cin>>t>>n;
    if(t==1)
    {
     for(int i=1;i*i<=n;i++)
     {
        if(i*i==n){cout<<"YES"<<endl;flag=0;break;}
     }   
    }
    else if(t==2)
    {
     for(int i=1;i*i*i<=n;i++)
     {
        if(i*i*i==n){cout<<"YES"<<endl;flag=0;break;}
     }   
    }
    if(flag==1)cout<<"NO"<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}