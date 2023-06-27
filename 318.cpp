#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    ll i=1,n,save=0,temp=1;
    cin>>n;
    while(n/temp>=1)
    {
        temp=temp*5;
        save=(n/temp)+save;
    // if(n/temp<1)break;
    }
    
    cout<<save<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}