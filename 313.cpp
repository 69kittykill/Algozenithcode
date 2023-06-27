#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    ll n, m, p, i, j, k;
    cin >> n >> m >> p;
    ll A[n][m], B[m][p], mult[n][p];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            cin >> B[i][j];
        }
    }
    ll rslt[n][p];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            rslt[i][j] = 0;

            for (int k = 0; k < m; k++)
            {
                rslt[i][j] += A[i][k] * B[k][j];
            }

            cout<<rslt[i][j]<<" ";
        }

        cout << endl;
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