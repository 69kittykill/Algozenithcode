#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,k;
    cin>>n>>k;
    int x;
    priority_queue<int>que;
    for(int i=0;i<n;i++){cin>>x;que.push(x);}
    ll count=0;
    while(k--)
    {   if(que.empty())break;
        count += que.top();
        int temp =floor((que.top())/2);
        if(!que.empty())que.pop();
        que.push(temp);
    }
    cout<<count<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}