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
     ll n,m;
     cin >> n >> m;
     vector<vector<char>> grid(n, vector<char>(m));
     fo(i,0,n-1){
         fo(j,0,m-1){
             cin >> grid[i][j];
         }
     }
     ll dp[n][m];
     dp[0][0] = 1;
     fo(i,1,n-1){
          if(grid[i][0] == '.')
              dp[i][0] = dp[i-1][0];
          else
              dp[i][0] = 0;
     }
     fo(j,1,m-1){
          if(grid[0][j] == '.')
              dp[0][j] = dp[0][j-1]%mod;
          else
              dp[0][j] = 0;
     }
     fo(i,1,n-1){
         fo(j,1,m-1){
             if(grid[i][j] == '.')
                 dp[i][j] = (dp[i][j - 1]%mod + dp[i - 1][j]%mod)%mod;
              else
                  dp[i][j] = 0;
         }
     }
     cout << dp[n - 1][m - 1];
     return 0;
}