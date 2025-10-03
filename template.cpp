#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma GCC optimize("Ofast,unroll-loops,fast-math,O3")
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()

#ifdef LOCAL
template<typename... T> void dbg(T... args) { ((cerr << args << " "), ...); cerr << "\n"; }
#else
#define dbg(...)
#endif

void solve() {
    ///    
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc = 1;
    // cin >> tc;
    while (tc--) solve();
}

