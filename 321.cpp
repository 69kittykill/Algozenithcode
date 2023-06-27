#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n;
    cin>>n;
    int arr[n];
    int len=0,i,j,k,maxlen=0;
    for(i=0;i<n;i++)cin>>arr[i];    
    for(i=0;i<n;i++)
    {
    len=2;
        if(arr[i+2]-arr[i+1]==arr[i+1]-arr[i]){len=3;
        for(j=i+1;j<n;j++)
            {
                if(arr[j+2]-arr[j+1]==arr[j+1]-arr[j])len++;
                else break;
            }
        }
    maxlen=max(maxlen,len);
        
    }
    cout<<maxlen<<endl;

}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}