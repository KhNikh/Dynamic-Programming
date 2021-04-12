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
    ll n, W;
    cin >> n >> W;
    vi wt(n+1);
    vi val(n+1);
    ll sum = 0;
    fo(i,1,n){
        ll w, v;
        cin>>w>>v;
        wt[i] = w;
        val[i] = v;
        sum += v;
    }
    ll dp[n + 1][sum + 1];
    fo(i,0,n){
        fo(j,0,sum){
            dp[i][j] = inf;
        }
    }
    fo(i, 0, n) dp[i][0] = 0;
    dp[1][val[1]] = wt[1];
    fo(i,2,n){
        fo(j,1,sum){
           
            if(val[i] > j){
                dp[i][j] = dp[i - 1][j];
            }
            else{
                dp[i][j] = min(dp[i - 1][j], wt[i] + dp[i - 1][j - val[i]]);
            }
            
        }
    }
   
    ll maxx = INT_MIN;
    fo(i, 0, sum)
    {
        if(dp[n][i]<=W)
            maxx = max(maxx, i);
    }
    cout << maxx;
    return 0;
}