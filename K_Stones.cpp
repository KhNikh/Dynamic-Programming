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
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    fo(i, 0, n - 1) cin >> arr[i];
    bool dp[k+1] = {false};

    fo(i, 1, k)
    {
        FOREACH(val, arr)
        {
            if (val>i)continue;
            if(dp[i-val] == 0)dp[i] = true;
        }
    }
    if(dp[k])cout<<"First";
    else cout<<"Second";

    return 0;
}