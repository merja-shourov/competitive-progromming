#include<bits/stdc++.h>
using namespace std;

#define int long long
#define FOR(i,a,b) for(int i=a;(i<b?i<b: i>b); i<b?++i:--i)
#define MOD 1e9+7
#define EPS 1e-5

void solve(){
    stack<int> st;
    cout << st.top() << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int tc = 1;
    // cin >> tc;
    for( int t=1; t <= tc; t++ ){
        solve();
    }
    return 0;
}