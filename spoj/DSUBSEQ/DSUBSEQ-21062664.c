#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include <map>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <cstdio>
#include <stack>
#include <queue>
#include <sstream>
#include <iomanip>

using namespace std;
typedef long long ll;
#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, j, k, in) for (ll i=j ; i<k ; i+=in)
#define RFOR(i, j, k, in) for (ll i=j ; i>=k ; i-=in)
#define REP(i, j) FOR(i, 0, j, 1)
#define REPI(i, j) for(ll i=1; i<=j; i++)
#define RREP(i, j) RFOR(i, j, 0, 1)
#define FOREACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define pb push_back
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define test int t; cin>>t; while(t--)
typedef vector<int> vi;
typedef vector<ll> vl;
const ll mod = 1000000007;
const int MAX = (1e9) + 3;

void solve();


int main() {
    //freopen("../input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}

void solve() {
    test {
        string s;
        cin >> s;
        ll dp[100005];
        MEM(dp, 0);
        dp[0] = 1;
        int last[300];
        MEM(last, -1);
        REP(i, s.length() + 1) {
            if (!i) continue;
            dp[i] = dp[i - 1] * 2;
            dp[i] %= mod;
            if (last[s[i - 1]] != -1) dp[i] = (dp[i] - dp[last[s[i - 1]] - 1] + mod) % mod;
            last[s[i - 1]] = i;
        }
        cout << dp[s.length()] << endl;
    };
}

