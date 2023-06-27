#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

 vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        vector <int> res;
        deque<int> q;
        
        int i = 0;
        
        for(i = 0;i<k;i++)
        {
            while((!q.empty()) && (arr[i] >= arr[q.back()]))
                q.pop_back();
            
            q.push_back(i);
            
        }
        
        for(;i<n;i++)
        {
            res.push_back (arr[q.front()]);
            
            while((!q.empty()) && (q.front() <= i-k))
            q.pop_front();
            
            while((!q.empty()) && (arr[i] >= arr[q.back()])) 
            q.pop_back();
            
            q.push_back(i);
            
        }
        
        res.push_back (arr[q.front()]);
        q.pop_front();
        
        return res;
    }

void solve()
{
    int n,k;
    cin>>n>>k;
    int arr[n],maxi=0;
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int> res = max_of_subarrays(arr,n,k);
    for(int i=0;i<res.size();i++)cout<<res[i]<<" ";
    cout<<endl;


}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}