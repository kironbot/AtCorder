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
    ll n;
    cin >> n;
    vector<ll> s(n);
    ll sum = 0;
    rep(i, 0, n) {
        cin >> s[i];
        sum += s[i];
    }
    sort(s.begin(), s.end());
    ll ans = 0;
    if (sum % 10 != 0) ans = sum;
    else {
        rep(i, 0, n) {
            if (s[i] % 10 != 0) {
                ans = sum - s[i];
                break;
            }
        }
    }
    cout << ans << endl;
}
