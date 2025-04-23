#include<bits/stdc++.h>
using namespace std;

#define int long long
#define FOR(i,a,b) for(int i=a;(i<b?i<b: i>b); i<b?++i:--i)
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define MOD 1e9+7
#define EPS 1e-5



map<int, int> mp;

void solve(){
    int x; cin >> x;
    mp[x]++;
}

int32_t main(){
    optimize();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tc = 1;
    cin >> tc;
    while(tc--){
        solve();
    }

    int ans = INT_MIN;
    for( auto x: mp){
        ans = max(ans , x.second);
    } 
    cout << ans << endl;

    return 0;
}