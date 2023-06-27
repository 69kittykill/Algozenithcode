#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    long double a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b*log(a)>(d*log(c)+ 1e-9)){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    //int _t;cin>>_t;while(_t--)
    solve();
}