#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll x1,x2,x3,x4,y1,y2,y3,y4,iar,oar;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    if(x2>x3&&y3<y2&&x3>x1&&y4>y2)
    {
        iar=(x2-x3)*(y3-y2);
        oar=(x2-x1)*(y2-y1)+(x4-x3)*(y4-y3)-iar;
        cout<<iar<<" "<<oar<<endl;       
    }
    else if(x4>x1&&y2>y3&&x1>x3&&y4>y2)
    {
        iar=(x4-x1)*(y4-y1);
        oar=(x2-x1)*(y2-y1)+(x4-x3)*(y4-y3)-iar;
        cout<<iar<<" "<<oar<<endl;       
    }
    else if(x2>x3&&y3>y1&&x3>x1&&y4>y2)
    {
        iar=(y3-y1)*(x4-x3);
        oar=(y2-y1)*(x2-x1)+(x4-x3)*(y4-y3)-iar;
        cout<<iar<<" "<<oar<<endl;       
    }
    else if(x2>x3&&y3>y2&&x3>x1&&y4>y2)
    {
        iar=(y2-y1)*(x2-x3);
        oar=(y2-y1)*(x2-x1)+(x4-x3)*(y4-y3)-iar;
        cout<<iar<<" "<<oar<<endl;       
    }
    else cout<<"0 0"<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}