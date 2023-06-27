#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
int binarySearch(vector<int> array, int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return 1;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}
void solve()
{
    int a,b,B;
    cin>>a>>b;
    set<int>A;
    int temp;
    for(int i = 0;i<a;i++){cin>>temp;A.insert(temp);}
    
    for(int i = 0;i<b;i++)
    {
        cin>>B;
        auto pos = A.find(B);
            if(pos != A.end())
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        A.insert(B);

    }
}
signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    int _t;cin>>_t;while(_t--)
    solve();
}