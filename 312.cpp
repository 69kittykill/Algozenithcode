#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void eucdis(double x1,double y1,double x2,double y2)
{
    double d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    cout<<fixed<<setprecision(7)<<d;
}
void mandis(double x1,double y1,double x2,double y2)
{   
    double x = x2-x1;
    double y = y2 -y1;
    if(x<0)x=-x;
    if(y<0)y=-y;
    cout<<fixed<<setprecision(7)<<x+y;
}
void solve()
{
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    eucdis(x1,y1,x2,y2);
    cout<<" ";    
    mandis(x1,y1,x2,y2);
    cout<<endl;    
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}