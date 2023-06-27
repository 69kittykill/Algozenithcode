#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
// ll prime(ll n)
// {
//         ll flag=1;
//         if(n==1)flag=0;
//         else if(n==2)flag=1;
//         else if(n==3)flag=1;
//         if(n>2){

//     for(ll i=2;i*i<=n;i++)
//     {
//         if(n%i==0)flag=0;
//     }
//         }
//         if(flag==1)
//         return n;
//         else return 0;
// }
// ll maxpowp1(ll n,ll i)
// {
//     ll temp=1,save=0;
//     while(n%temp==0){
//     temp=temp*i;
//     save++;
// }
//     return save;
// }

// void solve()
// {
//     ll a,n,div=1,i=1;
//     cin>>n;
//     for(i=1;i<=n;i++)
//     {   
//         if(i==prime(i))
//         {
//             if(n%i==0){div=div*(maxpowp1(n,i));}
//         }        
//     }
//     cout<<div<<endl;

// }    
void solve()
{   ll n;
    cin>>n;
    bool hash[n + 1];
    memset(hash, true, sizeof(hash));
    for (ll p = 2; p * p < n; p++)
        if (hash[p] == true)
            for (ll i = p * 2; i < n; i += p)
                hash[i] = false;

    ll total = 1;
    for (ll p = 2; p <= n; p++) {
        if (hash[p]) {

            ll count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    cout<<total<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}