#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int q;
    cin >> q;
    multiset<int> a;
    string s;
    int x;
    while (q--)
    {
        cin >> s;
        if (s == "add")
        {
            cin >> x;
            a.insert(x);
        }
        else if (s == "erase")
        {
            cin >> x;
            auto pos = a.find(x);
            if (pos != a.end())
            a.erase(a.find(x));
        }
        else if (s == "eraseall")
        {
            cin >> x;
            auto pos = a.find(x);
            if (pos != a.end())
            a.erase(x);
        }
        else if (s == "find")
        {
            cin >> x;
            auto pos = a.find(x);
            if (pos != a.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else if (s == "count")
        {
            cin >> x;
            auto pos = a.find(x);
            if (pos != a.end())
            cout << a.count(x) << endl;
            else cout<<0<<endl;
        }
       else if (s == "print")
       {
          
           for (auto it = a.begin(); it != a.end(); it++)cout << *it << " ";
           cout<<endl;
       }
        else if (s == "empty")
        {
            if(a.empty())continue;
            else a.clear();
        }
    }
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int _t;
    cin >> _t;
    while (_t--)
        solve();
}