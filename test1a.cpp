
#include <bits/stdc++.h>
using namespace std;
#define ll long long

const unsigned long long mod = 1e9 + 7;

// Function to return base^exponent
unsigned long long expo(
	unsigned long long base,
	unsigned long long exponent)
{

	unsigned long long ans = 1;

	while (exponent != 0) {
		if ((exponent & 1) == 1) {
			ans = ans * base;
			ans = ans % mod;
		}

		base = base * base;
		base %= mod;
		exponent >>= 1;
	}

	return ans % mod;
}

// Function to count all possible strings
unsigned long long solve(
	unsigned long long N)
{
	// All possible strings of length N
	unsigned long long ans
		= (expo(26, N)

		// vowels only
		- expo(5, N)

		// consonants only
		- expo(21, N))

		% mod;

	ans += mod;
	ans %= mod;

	// Return the
	// final result
	return ans;
}

signed main() {
    ios_base::sync_with_stdio(0);
cin.tie(0);cout.tie(0);



    ll _t,i=0;cin>>_t;
    ll arr[_t];
    while(i<_t)
    {cin>>arr[i];
    i++;}
    i=0;
    while(i<_t)
    { cout<<solve(arr[i])<<endl;
    i++;}
}
