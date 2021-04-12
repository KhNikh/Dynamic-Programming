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
    string s1,s2;
    cin >> s1 >> s2;
    ll n = s1.size();
    ll m = s2.size();
    ll dp[n + 1][m + 1];
    memset(dp, 0, sizeof(dp));
    fo(i,1,n){
        fo(j,1,m){
            if(s1[i-1] == s2[j-1])
                dp[i][j] = dp[i - 1][j - 1] + 1;
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    string str = "";
    ll i = n;
    ll j = m;
    while(i > 0 and j > 0){
           if(s1[i-1] == s2[j-1])
              { str += s1[i-1];
                  i--;
                  j--;
              }
            else if(dp[i-1][j] > dp[i][j-1])
                    i--;
            else
                j--;


    }
    reverse(str.begin(), str.end());
    cout << str;
    return 0;
}