#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void printDivisors(int n)
{
    int i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0)
            cout<<i<<" ";
    }
    if (i - (n / i) == 1) {
        i--;
    }
    for (; i >= 1; i--) {
        if (n % i == 0)
            cout<<n / i<<" ";
    }
}
void solve()
{
    
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    //int _t;cin>>_t;while(_t--)
    solve();
}