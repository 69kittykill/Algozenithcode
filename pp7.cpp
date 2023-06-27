#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    long double x,y;
    cin>>x>>y;
    if(x==0&&y==0)
{
    cout<<"ORIGIN"<<endl;
}
    else if (x==0) cout<<"X-AXIS"<<endl;
    else if (y==0) cout<<"Y-AXIS"<<endl;
    // else if (x>0&&y>0) cout<<"Q1"<<endl;
    // else if (x<0&&y>0) cout<<"Q2"<<endl;
    // else if (x<0&&y<0) cout<<"Q3"<<endl;
    // else if (x>0&&y<0) cout<<"Q4"<<endl;
    else if(x>0){
        if(y>0)cout<<"Q1"<<endl;
        else cout<<"Q4"<<endl;
    }
    else{
        if(y>0)cout<<"Q2"<<endl;
        else cout<<"Q3"<<endl;
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    //int _t;cin>>_t;while(_t--)
    solve();
}