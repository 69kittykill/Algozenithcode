#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;
#define ll long long
#define mod 1000000007
void print(string &s,int a,int b)
{
    for(int i =a-1;i<b;i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
string &rev(string &s,int a, int b)
{
    char temp;
    for(int i=a-1,j=1;i<((b-a)/2+a);i++,j++)
    {
        temp = s[i];
        s[i]=s[b-j];
        s[b-j]=temp;
    }

    return s;
}
string &rep(string &s,int a,int b,string &p)
{   
    int j=0;
    for(int i=a-1;i<b;i++)
    {
        s[i]=p[j++];
    }
    return s;
}

string &rot(string &s, int n)
{
    n=s.length()-n;
    // int len = s.size(),i;
    // char temp;
    // while(n>0)
    // {
    // temp=s[len-1];
    // for(i=len-2;i>0;i--)
    // {
    //     s[i+1]=s[i];
    // }
    // s[0]=temp;
    // n--;
    // }
    reverse(s.begin(), s.begin()+n);
    reverse(s.begin()+n, s.end());
    reverse(s.begin(), s.end());
    return s;
}

void solve()
{
    string s,q,r;
    int n;
    cin>>s;
    cin>>n;
    cout<<s<<endl;
    string temporary;
    getline(cin,temporary);
    while(n-->0)
    {
        getline(cin,q);
        if(q[2]=='i')print(s,q[6]-'0'+1,q[8]-'0'+1);
        if(q[2]=='v')s=rev(s,q[8]-'0'+1,q[10]-'0'+1);
        // reverse(s.begin()+q[8]-'0'-1,s.begin()+q[10]-'0'-1);
        if(q[2]=='p'){for(int i=0;i<q.size()-12;i++)r[i]=q[12+i];
            s=rep(s,q[8]-'0'+1,q[10]-'0'+1,r);}
        if(q[2]=='t')s=rot(s,q[7]-'0');

    }

    
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}