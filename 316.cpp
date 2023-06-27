#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007


void solve()
{
    ll m, n;
    string s, s1;
    cin >> s >> m >> n;
    ll N = 0, i, j, temp=1;
    for (i = s.size() - 1, j = 0; i >= 0, j < s.size(); i--, j++)
    {

        if (s[i] >= '0' && s[i] <= '9')
            {N = N + ((s[i] - '0') * temp);
                    temp = temp*m;}
        else if (s[i] >= 'A' && s[i] <= 'Z')
            {N = N + ((s[i] - 'A' + 10) * temp);
                    temp = temp*m;}
    }
    ll arr[1000];
    i = 1;
            arr[0] = (N % n); 
    ll save=0;
    while ((N/ n) > 0)
    {
        N = (N /n);
        arr[i] = (N % n); 
        save = i;
        i++;
    }
    
    char c;
    for (int j = save; j >= 0; j--)
    {
        if (arr[j] >= 0 && arr[j] <= 9)
            cout << arr[j];
        else if (arr[j] > 9)
        {
            c = (arr[j] - 10 + 'A');
            cout << c;
        }
    }
    cout<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int _t;cin>>_t;while(_t--)
    solve();
}