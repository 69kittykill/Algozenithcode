#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string temporary;
    getline(cin,temporary);
    string arr[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,arr[i]);
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<"Hi " <<arr[i]<<" !\n";
    }

}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    // int _t;cin>>_t;while(_t--)
    solve();
}