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
    ll n, W;
    cin >> n >> W;
    vi wt(n+1);
    vi val(n+1);
    fo(i,1,n){
        ll w, v;
        cin>>w>>v;
        wt[i] = w;
        val[i] = v;
    }
    ll dp[n + 1][W + 1];
    fo(i,0,n){
        fo(j,0,W){
            if(i==0 || j==0)
                dp[i][j] = 0;
            else if(wt[i] > j){
                dp[i][j] = dp[i - 1][j];
            }
            else if(wt[i] <=j){
                dp[i][j] = max(dp[i - 1][j], val[i] + dp[i - 1][j - wt[i]]);
            }
            
        }
    }
    cout << dp[n][W];
    return 0;
}