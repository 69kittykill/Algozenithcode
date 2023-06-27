#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int A,B;
    cin>>A>>B;
    cout<<"floor "<<A<<"/"<<B<<" = "<<A/B<<endl;
    cout<<"ceil "<<A<<"/"<<B<<" = "<<(A+B-1)/B<<endl;
    cout<<"round "<<A<<"/"<<B<<" = "<<(2*A+B)/(2*B)<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    //int _t;cin>>_t;while(_t--)
    solve();
}