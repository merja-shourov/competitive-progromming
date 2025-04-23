#include<bits/stdc++.h>
using namespace std;

#define int long long
#define FOR(i,a,b) for(int i=a;(i<b?i<b: i>b); i<b?++i:--i)
#define MOD 1e9+7
#define EPS 1e-5



void solve(){


}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int n, q;
    cin >> n >> q;

    map<string, string> mp;

    string name, ip;
    while(n--){
        cin >> name >> ip;
        string updateIp = ip+';';
        mp[updateIp] = name;
    } 

    string query, ipadr;
    while( q-- ){
        cin >> query >> ipadr;
        cout << query << " " << ipadr << " #" << mp[ipadr] << endl;
    }


    return 0;
}