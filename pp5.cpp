#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    // cout<<min(a,min(b,c))<<" "<<max(a,max(b,c))<<endl;
    cout<<min({a,b,c})<<" "<<max({a,b,c})<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    //int _t;cin>>_t;while(_t--)
    solve();
}