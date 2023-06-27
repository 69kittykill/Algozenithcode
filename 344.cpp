#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void permute(string& a, int l, int r)
{
    // Base case
    if (l == r)
        cout << a << endl;
    else {
        // Permutations made
        for (int i = l; i <= r; i++) {
 
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            permute(a, l + 1, r);
 
            // backtrack
            swap(a[l], a[i]);
        }
    }
}
void solve()
{
    int n;
    cin>>n;
    string s;
    for(int i=n;i>0;i--)
    {   char c = '0'+i;
        s = s + c;
    }
    permute(s, 0, n - 1);
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}