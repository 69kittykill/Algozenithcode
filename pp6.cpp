#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

// 0-9 - 48-57
// A-Z - 65-90
// a-z - 97-123
// c - 'a'+'A' = capital of c
void solve()
{
    char c;
    cin>>c;
    if(c>='0'&&c<='9')
    {
        cout<<"IS DIGIT"<<endl;
    }
    else
        {
            cout<<"ALPHA"<<endl;
            if(c>='a'&&c<='z')
        {
            cout<<"IS SMALL"<<endl;
        }
        else if(c>='A'&&c<='Z')cout<<"IS CAPITAL"<<endl;
        }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    //int _t;cin>>_t;while(_t--)
    solve();
}