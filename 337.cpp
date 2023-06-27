#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    map <string,int> mp;
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
            if(mp.find(stu)==mp.end())
            {
            mp.insert(pair<string,int>(stu,n));
            }
            else 
            {
                auto itr = mp.find(stu);
                if (itr != mp.end())(*itr).second = n;
            }

        }
        else if(s=="erase")
        {
            cin>>stu;
            if(mp.find(stu)!=mp.end())mp.erase(stu);
        }
        else if(s=="print")
        {
            cin>>stu;
            if(mp.find(stu)!=mp.end())cout<<mp.at(stu)<<endl;
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