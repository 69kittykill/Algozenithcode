#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


void solve()
{
    string str;
    cin>>str;
    ll size = str.size();
    ll i=0,sum=0;
    while(i!=size)
    {   
        
        sum = sum + str[i] - '0';
        i++;
    }
    cout<<sum<<endl;

}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}