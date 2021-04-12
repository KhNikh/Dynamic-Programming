#include <bits/stdc++.h>
typedef long long ll;
#define inf 1000000007
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
    ll n,k;
    cin >> n >> k;
     ll arr[n];
    fo(i, 0, n-1) cin >> arr[i];
    ll dp[n + 1];
    fo(i, 0, n-1) dp[i] = inf;
    dp[0] = 0;
    fo(i, 1, n-1){
        fo(j,1,k){
            if(i-j<0)
                break;
            else
                dp[i] = min(dp[i], abs(arr[i] - arr[i-j]) + dp[i - j]);
        }
    }
    cout << dp[n-1];
    return 0;
}