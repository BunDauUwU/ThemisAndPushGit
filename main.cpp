#include <bits/stdc++.h>

using namespace std;

#define               el  "\n"
#define               fi  first
#define               se  second
#define               pb  push_back
#define               eb  emplace_back
#define           Elaina  signed main()
#define          MASK(i)  (1LL << (i))
#define        BIT(x, i)  ((x) >> (i) & 1)
#define        CNTBIT(x)  __builtin_popcountll(x)
#define           ALL(v)  (v).begin(), (v).end()
#define            FAST   cin.tie(nullptr) -> ios_base::sync_with_stdio(false);
#define         FILE(FILE)  if(FILE != ""){freopen(FILE".inp","r",stdin);freopen(FILE".out","w",stdout);}\
                          else{freopen("uwu.inp","r",stdin);freopen("uwu.out","w",stdout);}

typedef        long long  ll;
typedef      long double  ld;
typedef      pair<ll,ll>  pii;

const ll      N  =  2e5 + 5;
const ll      M  =  2e5 + 5;
const ll    mod  =  1e9 + 7;
const ll    INF  =  1e18;
bool checksub[]  =  {0, 1, 1, 1, 1};

template <class X, class Y> void add(X &a, Y b){
    a += b;
    if(a < 0) a += mod;
    if(a >= mod) a -= mod;
}
template <class X, class Y> bool ckmin(X &a, Y b){
    return (a > b ? a = b, 1:0);
}
template <class X, class Y> bool ckmax(X &a, Y b){
    return (a < b ? a = b, 1:0);
}

template<class X> struct compress{
    vector<X> c;
    compress(vector<X> v){c = v; sort(ALL(c)); c.erase(unique(ALL(c)), c.end()); }
    int operator() (X& a){ return lower_bound(ALL(c), a) - c.begin(); }
};

struct IO{IO(){cin.tie(nullptr) -> ios_base::sync_with_stdio(false);}}; static IO Setup;
struct TIME{~TIME(){cerr << "Time: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";}}; TIME time_setup;

///////////////////////
//.........../\__/\..//
//..........(=o_o= ).//
//.....[Blackcat!]<\.//
///////////////////////

Elaina {
    FILE("")
}
