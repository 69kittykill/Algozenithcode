#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int q;
    cin >> q;
    set<int> se;
    int x;
    string s;
    for (int i = 0; i < q; i++)
    {
        cin >> s;
        if (s == "add")
        {
            cin >> x;
            se.insert(x);
        }
        else if (s == "erase")
        {
            cin >> x;
           auto pos = se.find(x);
            if(pos != se.end())
                se.erase(x);
        }
        else if (s == "find")
        {
            cin >> x;
            auto pos = se.find(x);
            if(pos != se.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (s == "print")
        {
            
            for (auto& it : se)
            {
                cout << it << ' ';
            }
            cout<<endl;
        }
        else if (s == "empty")
        {
            if(!se.empty())se.clear();
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int _t;cin>>_t;while(_t--)
    solve();
}