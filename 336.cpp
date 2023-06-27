#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int q, t, x;
    cin >> q;
    set<int> p;
    while (q--)
    {
        cin >> t >> x;
        if (t == 1)
        {
            p.insert(x);
        }
        if (t == 2)
        {
            auto pos = p.find(x);
            while (pos != p.end())
            {
                x++;
                pos = p.find(x);
            }
            cout << x << endl;
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