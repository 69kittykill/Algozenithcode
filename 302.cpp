#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
void solve()
{
    int a,b,c,i,j,k,h,m=1;
    cin>>a>>b>>c;
    for(i=0;i<a;i++)
    {
        if(i%2==0)
        {
            for(j=0;j<b*c+b+1;j++)cout<<"*";
            cout<<endl;
            for(h=1;h<c+1;h++,m++){
            for(j=0,k=0,m=h;j<b*c+b+1;j++)
            {            
                if(j%(c+1)==0){cout<<"*";}
                else if(j==m&&(j/(c+1))%2==0){cout<<"\\";m=m+2*c-2*h+2;}
                else if(j==m&&(j/(c+1))%2==1){cout<<"/";m=m+2*h;}
                else cout<<".";
            }
            cout<<endl;
            }
        }
        else if(i%2==1) 
            {
            for(j=0;j<b*c+b+1;j++)cout<<"*";
            cout<<endl;
            for(h=1;h<c+1;h++,m++){
            for(j=0,k=0,m=c-h+1;j<b*c+b+1;j++)
            {            
                if(j%(c+1)==0){cout<<"*";}
                else if(j==m&&(j/(c+1))%2==1){cout<<"\\";m=m+2*c-2*h+2;}
                else if(j==m&&(j/(c+1))%2==0){cout<<"/";m=m+2*h;}
                else cout<<".";
            }
            cout<<endl;
            }
        }
    }
    for(j=0;j<b*c+b+1;j++)cout<<"*";
            cout<<endl;
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}