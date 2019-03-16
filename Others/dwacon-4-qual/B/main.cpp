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
    ll two = 0, ans = 0;
    for (auto c : s) {
        if (c == '2') {
            two++;
            chmax(ans, two);
        }
        else {
            two--;
            if (two < 0) {
                cout << -1 << endl;
                return 0;
            }
        }
    }
    if (two) {
        cout << -1 << endl;
        return 0;
    }
    cout << ans << endl;
}