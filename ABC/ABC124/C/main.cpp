#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1e9 + 7;
const ll INF = 1LL << 60;
#define rep(i, a, n) for (ll i = (a); i < (n); i++)
#define debug(x) cerr << #x << ": " << x << endl;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

int main() {
    string s;
    cin >> s;
    ll n = (ll)s.size();
    ll ans = INF, tmp = 0;
    rep(i, 0, n) {
        if (i % 2 == 0 && s[i] == '0') tmp++;
        if (i % 2 == 1 && s[i] == '1') tmp++;
    }
    chmin(ans, tmp);

    tmp = 0;
    rep(i, 0, n) {
        if (i % 2 == 0 && s[i] == '1') tmp++;
        if (i % 2 == 1 && s[i] == '0') tmp++;
    }
    chmin(ans, tmp);
    cout << ans << endl;
}
