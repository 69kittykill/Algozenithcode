#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int q;
    cin>>q;
    map<string,int>m;
    string s;
    int n;
    while(q--)
    {
        cin>>s;
        if(m.find(s)==m.end())
            {
            m.insert(pair<string,int>(s,0));
            cout<<"OK"<<endl;
            }
            else 
            {
                auto itr = m.find(s);
                if (itr != m.end())(*itr).second+=1;
                cout<<s<<(*itr).second<<endl;
            }
        
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}