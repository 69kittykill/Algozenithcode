#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string str;
    getline(cin, str);
    ll i=0,j=0,flag=1;
    for(i=0,j=strlen(str.c_str())-1;i<=j;)
    {   

        if(str[i]>'z'||str[i]<'a'){i++;continue;}
        if(str[j]>'z'||str[j]<'a'){j--;continue;}
        if(str[i]==str[j]) {i++;j--;flag=0;continue;}
        if(str[i]!=str[j]) {flag = 1;break;}
    }
        if(flag==1)cout<<"NO"<<endl;
    if(flag==0)cout<<"YES"<<endl;
    str.clear();

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