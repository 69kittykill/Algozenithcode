#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{   int n,m,i=0,j;
    cin>>n>>m;
    string p1 = "***";
    string p2 = "*..";
    for(i=0;i<m;i++)cout<<p1;
    cout<<"*"<<endl;

    for(i=0;i<n;i++)
    {   
        for(j=0;j<m;j++)cout<<p2;
        cout<<"*"<<endl;
        for(j=0;j<m;j++)cout<<p2;
        cout<<"*"<<endl;
        for(j=0;j<m;j++)cout<<p1;
        cout<<"*"<<endl;
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}