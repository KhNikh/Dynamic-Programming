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
    ll n;
    cin>>n;
    vector<vector<ll>> dp(3, vector<ll>(n, 0));
    ll a, b, c;
    cin >> a >> b >> c;
    dp[0][0] = a;
    dp[1][0] = b;
    dp[2][0] = c;
    fo(i,1,n-1){
        cin >> a >> b >> c;
        dp[0][i] = max(dp[1][i - 1], dp[2][i - 1]) + a;
        dp[1][i] = max(dp[0][i - 1], dp[2][i - 1]) + b;
        dp[2][i] = max(dp[0][i - 1], dp[1][i - 1]) + c;
    }
    cout << max(dp[0][n - 1], max(dp[1][n - 1], dp[2][n - 1]));
    return 0;
}