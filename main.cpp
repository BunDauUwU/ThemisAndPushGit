#include <bits/stdc++.h>

using namespace std;

#define               fi  first
#define               se  second
#define               pb  push_back
#define               eb  emplace_back
#define           Elaina  signed main()
#define          MASK(i)  (1LL << (i))
#define        BIT(x, i)  ((x) >> (i) & 1)
#define        CNTBIT(x)  __builtin_popcountll(x)
#define           ALL(v)  (v).begin(), (v).end()
#define             FAST  cin.tie(nullptr) -> ios_base::sync_with_stdio(false);

typedef        long long  ll;
typedef      long double  ld;
typedef      pair<ll,ll>  pii;

const ll      N  =  1e5 + 5;
const ll      M  =  1e5 + 5;
const ll    mod  =  1e9 + 7;
const ll    INF  =  1e18;
bool checksub[]  =  {0, 1, 1, 1, 1};

template <class X, class Y> void add(X &a, Y b){
    a += b;
    if(a < 0) a += mod;
    if(a >= mod) a -= mod;
    a%=mod;
}
template <class X, class Y> bool ckmin(X &a, Y b){
    return (a > b ? a = b, 1:0);
}
template <class X, class Y> bool ckmax(X &a, Y b){
    return (a < b ? a = b, 1:0);
}

template <int MOD>struct modnum {
  int val;

  modnum(ll v = 0) { val = v % MOD; if (val < 0) val += MOD;}
  modnum(ll a, ll b) : val(0){ *this += a; *this /= b;}

  modnum& operator+=(modnum& b) {val += b.val; if (val >= MOD) val -= MOD; return *this;}
  modnum& operator-=(modnum& b) {val -= b.val; if (val < 0) val += MOD;return *this;}
  modnum& operator*=(modnum& b) {val = (ll)val * b.val % MOD;return *this;}

  friend modnum pw(modnum a, ll e) {
    modnum res = 1;
    for(e; e; e >>= 1){
        if(e & 1) e *= (a);
        a *= a;
    }
    return res;
  }
  friend modnum inverse(modnum a) { return pw(a, MOD - 2); }

  modnum& operator/=(modnum& b) { return *this *= inverse(b); }

  friend modnum operator+(modnum a, modnum  b) { return a += b; }
  friend modnum operator-(modnum a, modnum  b) { return a -= b; }
  friend modnum operator-(modnum  a) { return 0 - a; }
  friend modnum operator*(modnum a, modnum  b) { return a *= b; }
  friend modnum operator/(modnum a, modnum  b) { return a /= b; }

  friend ostream& operator<<(ostream& out, modnum& a) {return out << a.val;}
  friend bool operator==(modnum& a, modnum& b) {return a.val == b.val;}
  friend bool operator!=(modnum& a, modnum& b) {return a.val != b.val;}
};

using num = modnum<mod>;
/////////////////////////
///.........../\__/\..///
///..........(=o_o= ).///
///.....[Blackcat!]<\.///
/////////////////////////

void solve(){

}

Elaina {
    FAST
//    #define FILE ""
    #ifdef FILE
        freopen(FILE".inp","r",stdin);freopen(FILE".out","w",stdout);
    #else
        freopen("uwu.inp","r",stdin);freopen("uwu.out","w",stdout);
    #endif

    ll tabitabi = 1;
    //cin >> tabitabi;
    while(tabitabi-- ) {
        solve();
    }

    return 0;
}
