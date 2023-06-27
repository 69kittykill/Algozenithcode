#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)cin>>arr[i];
    int min = arr[0],min1 = mod;
    for(int i =0;i<n;i++)
    {
        if(arr[i]<min)min=arr[i];
    }
    
    for(int i =0;i<n;i++)
    {
        if(arr[i]<min1&&arr[i]>min)min1=arr[i];
    }
    if(min1 == mod)
    cout<<-1<<endl;
    else cout<<min1<<endl;
    
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}