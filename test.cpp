#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    string s;
    cin>>s;
    // stack<char> st;
    string str = "Yes";
    int count =0,temp=0,flag =1;
    map<char,int> mp;
    mp.insert(pair<char, int>('Y',0));
    mp.insert(pair<char, int>('e',1));
    mp.insert(pair<char, int>('s',2));
 
    auto it = mp.find(s[0]);
    if(it != mp.end())count = it->second;
    for(int i=0;i<s.size();i++)
    {
        auto it = mp.find(s[i]);
    if(it != mp.end())temp =count;
        else{flag =0;break;}
        if(count==0)
        {
            count = 1;
            // st.pop();
        }
        else if(count==1)
        {
            count = 2;
            // st.pop();
        }
        else if(count==2)
        {
            count = 0;
            // st.pop();
        }
        if(count ==0||temp==2)flag=1; 
        else if(count ==1||temp==0)flag=1; 
        else if(count ==2||temp==1)flag=1;
        else flag =0; 
    }
    if(flag==1)cout<<"True"<<endl;
    else cout<<"False"<<endl;

}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}