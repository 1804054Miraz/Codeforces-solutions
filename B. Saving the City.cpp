/*
    Author: Ritik Patel
*/

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& LIBRARIES &&&&&&&&&&&&&&&&&&&&&&&&&&&

#include <bits/stdc++.h>
using namespace std;

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& DEFINES &&&&&&&&&&&&&&&&&&&&&&&&&&&

#define int long long int
// #define ll long long int
#define all(i) i.begin(), i.end()
#define sz(a) (int)a.size()

//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&& CODE &&&&&&&&&&&&&&&&&&&&&&&&&&&

const int MAXN = 1e5 + 5;
int memo[MAXN][2];
vector<pair<int, int>> cnt;
int N, a, b;
const int INF = 1e13;

int dp(int id, int op) {
    if(id >= N) {
        if(op == 1)
            return a;
        return 0;
    }
    auto &res = memo[id][op];
    if(res != -1)
        return res;
    res = INF;
    //Blast 1
    res = a + dp(id + 2, 0);
    // Mix two seperate 1's
    int cost = 0;
    if(id + 1 < N) {
        cost = cnt[id + 1].first * b;
    }
    res = min(res, cost + dp(id + 2, 1) );
    return res;
}


void solve() {
    cin >> a >> b;
    string s; cin >> s;
    int n = sz(s);
    int i = 0;
    cnt.clear();
    while(i < n and s[i] == '0') ++i;
    while(i < n) {
        int j = i;
        while(j < n and s[j] == s[i]) ++j;
        cnt.emplace_back(j - i, s[i] == '1' ? 1: 0);
        i = j;
    }

    if(cnt.empty()) {
        cout << 0 << '\n';
        return;
    }

    if(cnt.back().second == 0) {
        cnt.pop_back();
    }

    N = sz(cnt);
    for(int i = 0; i < sz(cnt); ++i)
        for(int j = 0; j < 2; ++j)
            memo[i][j] = -1;

    cout << dp(0, 0) << '\n';
}

int32_t main(){
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    int T = 1;
    cin >> T;
    for(int i = 1; i <= T; ++i){
        // cout << "Case #" << i << ": ";
        solve();
    }
    return 0;
}

/*
Sample inp
*/
