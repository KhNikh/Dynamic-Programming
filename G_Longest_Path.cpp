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

 vector<ll> adj[100005];
 vector<ll> dp(100005, -1);

 ll findLongestPath(ll i){

     if(dp[i]!=-1)
         return dp[i];
     else{
         bool has_neighbours = false;
         ll result = INT_MIN;
         FOREACH(neighbour,adj[i]){
             has_neighbours = true;
             result = max(result, findLongestPath(neighbour));
         }
         if(has_neighbours)
             return dp[i] = result + 1;
        else
            return 0;
     }
 }
 
 int main()
 {
     // ios::sync_with_stdio(false);
     // cin.tie(0);
     ll n, m;
     cin >> n >> m;

     fo(i, 0, m)
     {
         ll x, y;
         cin >> x >> y;
         adj[x].push_back(y);
     }
     ll result = INT_MIN;

     fo(i,1,n){
         result = max(result, findLongestPath(i));
     }

     cout << result;
     return 0;
}