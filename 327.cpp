#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{   
    int q,x;
    string str;
    cin>>q;
    stack <int> s;
    for(int i =0;i<q;i++)
    {
        cin>>str;
        if(str=="add")
        {
            cin>>x;
            s.push(x);
        }
        if(str=="remove")
        {
            if(s.empty())continue;
            else s.pop();
        }
        if(str=="print")
        {
            if(s.empty())cout<<0<<endl;
            else cout<<s.top()<<endl;
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}