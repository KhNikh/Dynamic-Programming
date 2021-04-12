#include <bits/stdc++.h>
typedef long long ll;
#define vi vector<ll>
#define pi pair<ll, ll>
#define st set<ll>
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define fo(i, a, b) for (ll i = a; i <= b; i++)
#define Rfo(i, a, b) for (ll i = a; i >= b; i--)
#define FOREACH(it, l) for (auto it : l)
#define sortVi(v) sort(v.begin(), v.end())
#define sortViR(v) sort(v.begin(), v.end(), greater<ll>())
#define sortArr(arr) sort(arr, arr + n)
#define sortArrR(arr) sort(arr, arr + n greater<ll>())
#define Sq(a) (a) * (a)
#define mod 1000000007
using namespace std;

//=============================================================================
//--------------------------LETS  GO!!!---------------------------------
//=============================================================================

int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    ll n;
    cin >> n;
    ll arr[n + 1];
    fo(i, 1, n) cin >> arr[i];
    ll dp[n + 1];
    fo(i, 1, n) dp[i] = 0;
    dp[1] = 0;
    dp[2] = abs(arr[2] - arr[1]);

    fo(i, 3, n) dp[i] = min(dp[i - 1] + abs(arr[i] - arr[i - 1]), dp[i - 2] + abs(arr[i] - arr[i - 2]));
    cout << dp[n];
    return 0;
}