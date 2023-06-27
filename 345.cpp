#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

template <typename T>
pair<T, bool> getNthElement(set<T>& searchSet,int index)
{
    pair<T, bool> result;
 
    // Check if index is valid or not
    if (searchSet.size() > index) {
        result.first
            = *(std::next(
                searchSet.begin(),
                index));
        result.second = true;
    }
 
    else
        result.second = false;
 
    // Return the pair
    return result;
}
void solve()
{
    int q;
    cin >> q;
    set<int> a;
    string s;
    int x;
    while (q--)
    {
        cin >> s;
        if(s=="add")
        {
            cin>>x;
            auto pos = a.find(x);
            if (pos == a.end())
            a.insert(x);

        }
        else if(s=="remove")
        {
            cin>>x;
            auto pos = a.find(x);
            if (pos != a.end())
            a.erase(a.find(x));
        }
        else if(s=="find")
        {
            cin>>x;
            auto pos = a.find(x);
            cout<<pos<<endl;            

        }
        else if(s=="findpos")
        {
            cin>>x;
        }
    }    
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    //int _t;cin>>_t;while(_t--)
    solve();
}