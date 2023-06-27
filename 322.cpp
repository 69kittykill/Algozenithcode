#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    getline(cin,s);
    int arr[26];
    int i=0;
    while(i<26)
    {
        arr[i]=0;
        i++;
    }

    for(i=0;i<s.size();i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            arr[s[i]-'a']=arr[s[i]-'a']+1;
        }
        else if(s[i]>='A'&&s[i]<='Z')
        {
            arr[s[i]-'A']=arr[s[i]-'A']+1;
        }
    }
    i=0;
    while(i<26)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;

    

}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;
        string temporary;
    getline(cin,temporary);

    while(_t--)solve();
}