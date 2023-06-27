#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    multimap <string,int> mp;
    int n,q;
    // map <string,int> iterator itr ;
    cin>>q;
    string s,stu;
    while(q--)
    {
        cin>>s;
        if(s=="add")
        {
            cin>>stu>>n;
            mp.insert(pair<string,int>(stu,n));
            
        }
        else if(s=="erase")
        {
            cin>>stu;
            auto it1 = mp.find(stu);
            if(mp.find(stu)!=mp.end())mp.erase(it1);
        }
        else if(s=="eraseall")
        {
            cin>>stu;
            if(mp.find(stu)!=mp.end())mp.erase(stu);
        }
        else if(s=="print")
        {
            cin>>stu;
            auto itr = mp.find(stu);
            if(mp.find(stu)!=mp.end())cout<<itr->second<<endl;
            else cout<<0<<endl;
            
        }
    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}