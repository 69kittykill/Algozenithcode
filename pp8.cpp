#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(min(b,d)<max(a,c))cout<<"-1"<<endl;
    else cout<<max(a,c)<<" "<<min(b,d)<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    //int _t;cin>>_t;while(_t--)
    solve();
}