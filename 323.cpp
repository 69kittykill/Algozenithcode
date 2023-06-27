#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')s[i]=s[i]+'A'-'a';
        else if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]+'a'-'A';
    }
    cout<<s<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;
        string temporary;
    getline(cin,temporary);
    while(_t--)
    solve();
}