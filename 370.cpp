#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void twoSum(int arr[],int n,int x) {
    int count=0,a;
    for (int i = 0; i < n; i++)
        if(arr[i]>=x)a=i-1;
        else a=n;
    for(int i=0,j=a-1;i<j;)
    {
        if((arr[i]+arr[j])<=x){count++;}
        if(arr[i+1]-arr[i]>arr[j]-arr[j-1]) j--;
        else if(arr[i+1]-arr[i]<arr[j]-arr[j-1]) i++;
        else if(arr[i+1]-arr[i]==arr[j]-arr[j-1]){}

    }
    cout<<2*count<<endl;

}
void solve()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    twoSum(arr,n,x);
    
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}