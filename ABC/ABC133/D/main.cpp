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
    vector<ll> a(n);
    rep(i, 0, n) cin >> a[i];

    vector<ll> x(n);
    ll sa = 0;
    rep(i, 0, n) {
        if (i % 2 == 0) sa += a[i];
        else sa -= a[i];
    }
    x[0] = sa / 2;
    rep(i, 1, n) {
        x[i] = a[i-1] - x[i-1];
    }
    rep(i, 0, n-1) cout << 2*x[i] << " ";
    cout << 2*x[n-1] << endl;
}
