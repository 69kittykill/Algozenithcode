#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int n,q;
    cin>>n>>q;
    int arr[n];
    int count,flag=0;
    pair <int,int>p[q];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<q;i++)
    {
        cin>>p[i].first>>p[i].second;
        int x = p[i].second;
        switch(p[i].first){
        case 1:
        flag=0;
        for(int j=0;j<n;j++)
        {
            if(x<=arr[j]){cout<<arr[j]<<" ";flag=1;break;}
        }
        if(flag==0)cout<<-1<<" ";
        break;
        case 2:
        flag=0;
       for(int j=0;j<n;j++)
        {
            if(x<arr[j]){cout<<arr[j]<<" ";flag=1;break;}
        }
        if(flag==0)cout<<-1<<" ";
        break;
        case 3:
        flag=0;
        for(int j=n-1;j>=0;j--)
        {
            if(x>=arr[j]){cout<<j+1<<" ";flag=1;break;}
        }
        if(flag==0)cout<<0<<" ";
        break;
        case 4:
        flag=0;
        for(int j=n-1;j>=0;j--)
        {
            if(x>arr[j]){cout<<j+1<<" ";flag=1;break;}
        }
        if(flag==0)cout<<0<<" ";
        break;
        default:
        cout <<-1<<" ";
        }
    }
    cout<<endl;

}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}