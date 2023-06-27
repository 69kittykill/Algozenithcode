#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int q;
    cin>>q;
    string s;
    int x;
    queue<int>que;
    for(int i=0;i<q;i++)
    {
        cin>>s;
        if(s=="add")
        {
            cin>>x;
            que.push(x);
        }
        else if(s=="remove")
        {
            if(que.empty())continue;
            else que.pop();
        }
        else if(s=="print")
        {
            if(que.empty())cout<<0<<endl;
            else cout<<que.front()<<endl;
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}