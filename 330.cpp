// Enter your code below 
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


void solve()
{
    int q;
    cin >> q;
    int x;
    int front=0;
    string str;
    stack<int> s1, s2;
    for (int i = 0; i < q; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> x;
            if(s1.empty())
            {
                front =x;   
            }

            s1.push(x);

            
        }
        else if (str == "pop")
        {
            if (s2.empty())
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
                
            }

            int x = s2.top();
            s2.pop();
            cout << x << endl;
        }
        else if (str == "front")
        {
            if (s2.empty())
                cout << front << endl;
            else
                cout << s2.top() << endl;
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