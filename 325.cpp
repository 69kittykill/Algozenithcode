#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int q;
    string s;
    int x;
    cin>>q;
    vector<int>v;
    for(int i=0;i<q;i++)
    {
        cin>>s;
        if(s=="add")
        {
            cin>>x;
            v.push_back(x);
        }
        else if(s=="remove")
        {
            v.pop_back();
        }
        else if(s=="print")
        {
            cin>>x;
            if(x<v.size())
            {
            cout<<v[x]<<endl;
            }
            else cout<<0<<endl;
        }
        else if(s=="clear")
        {
            v.clear();
            // cout<<v[0]<<endl<<v[1]<<endl<<v[2]<<endl;
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}   