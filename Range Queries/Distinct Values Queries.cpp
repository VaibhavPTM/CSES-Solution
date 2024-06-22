// Link : 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
// #ifndef ONLINE_JUDGE 
//     #include "debug.hpp"
// #endif

// #include<boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
// #define i512      int512_t
// #define i256      int256_t
// #define i128      int128_t
// #define i1024     int1024_t
using namespace __gnu_pbds; 
using namespace std;        

#define int                     long long
#define ll                      long long
#define TEST                    int t = 1; cin >> t; while(t--) solve();
#define p(A,B)                  pair<A,B>
#define pb                      push_back
#define all(v)                  v.begin(), v.end()
#define allr(v)                 v.rbegin(), v.rend()
#define v(T)                    vector<T> 
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update> 
#define vi                      vector<int> 
#define vs                      vector<string > 
#define vvi                     vector<vector<int> > 
#define vvs                     vector<vector<string> > 
#define vpi                     vector<pair<int,int> > 
#define vv(T)                   vector<vector<T> >
#define maxhp(T)                priority_queue<T>
#define minhp(T)                priority_queue<T, vector<T> , greater<T> >
#define ff                      first
#define ss                      second
#define yes                     cout << "YES" << endl;
#define no                      cout << "NO" << endl;
#define ps(x,y)                 fixed<<setprecision(y)<<x
#define mem(n,i)                memset(n, i,sizeof n)
#define Case(i)                 cout << "Case #" << i << ": "
#define endl                    "\n"
#define p0(x)                   cout<<(x)<<" "
#define s1(A,a)                 A a; cin >> a
#define s2(A,a,b)               A a, b; cin >> a >> b
#define s3(A,a,b,c)             A a, b, c; cin >> a >> b >> c
#define s4(A,a,b,c,d)           A a, b, c, d; cin >> a >> b >> c >> d
#define s5(A,a,b,c,d,e)         A a, b, c, d, e; cin >> a >> b >> c >> d >> e
#define s6(A,a,b,c,d,e,f)       A a, b, c, d, e, f; cin >> a >> b >> c >> d >> e>> f
#define loop(i_itr, k, n)       for(int i_itr = k; i_itr <= n; i_itr++)
#define looprev(i_itr,n,a)      for(ll i_itr=n; i_itr>=a; i_itr--)

template <typename A, typename B>
void print (v(p(A,B)) &ar) { for(auto &i : ar) cout << i.ff << " " << i.ss << endl;}
template <typename A>
void print(v(A) ar[], int n) { for(int i = 0; i < n; i++) {cout << i << " --> "; {for(int j = 0; j < ar[i].size(); j++){cout << ar[i][j] << " "; } cout << endl; }}}
template <typename T>
void print(v(v(T)) &ar) { for(int i = 0; i < ar.size(); i++) { for(int j = 0; j < ar[i].size(); j++){ cout << ar[i][j] << " "; } cout << endl; } }
template <typename A>
void print (v(A) &ar) { for(A &i : ar)  cout << i << " "; cout << endl; }
template <typename A>
void print (set<A> &ar) { for(auto &i : ar)  cout << i << " "; cout << endl; }
template <typename A>
void print (multiset<A> &ar) { for(auto &i : ar)  cout << i << " "; cout << endl; }
template <typename T>
void print(T t) { cout << t << '\n' ;}
template<typename T, typename... Args>
void print(T t, Args... args) {cout << t << " "; print(args...) ;}

template <typename A>
void sin (v(A) &ar) { for(A &i : ar)  cin >> i; }
template <typename T>
void sin(v(v(T)) &ar) { for(int i = 0; i < ar.size(); i++) { for(int j = 0; j < ar[i].size(); j++){ cin >> ar[i][j]; } } }
template <typename A, typename B>
void sin (v(p(A,B)) &ar) { for(auto &i : ar) { cin >> i.ff >> i.ss; } }


const ll INF = 1e18;
const ll MOD = 1e9 + 7;
ll mod = 998244353;
bool prime(ll n) {if(n == 1) return false; for(int i = 2; i * i <= n; i++) if(n % i == 0) return false;return true;}
ll POW (ll a, ll p, ll m) { ll res = 1; while (p > 0) { if(p % 2 == 0){ p /= 2; a = ((a%m)*(a%m))%m;} else{ res = ((res%m)*(a%m))%m; p--; }}return res;}
ll bs_sqrt(ll x) { ll left = 0, right = 2000000123; while (right > left) { ll mid = (left + right) / 2; if (mid * mid > x) right = mid;else left = mid + 1;}return left - 1;}
ll ceilDiv(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll getsum(ll n) {return (n*(n+1))/2;}
int nextGratDivNum(int l, int i) {return (ceilDiv(l, i)) * i;}
int sumSeire(int a, int l, int n) {int res = 0;if(n % 2 == 0) {res = ((a + l) * (n / 2));}else res = ((a + l)/2) * n;return res;}

int power_mod(int v, int n) {v %= mod;if(v == 0) return 0;n %= (mod - 1); int ret = 1;for(; n; n >>= 1, v = (v * v) % mod) if(n & 1) ret = (ret * v) % mod;return ret;}
int mod_sub(int x, int y) {x %= mod; y %= mod;return (x + mod - y) % mod;}
int mod_add(int x, int y) {x %= mod; y %= mod;return (x + y) % mod;}
int mod_mul(int x, int y) {x %= mod; y %= mod;return (x * y) % mod;}
int mod_inv(int x) {x %= mod;return power_mod(x, mod - 2);}
int mod_div(int x, int y) {x %= mod; y %= mod;return mod_mul(x, mod_inv(y));}

v(int) xx = {1,-1,0,0,1,-1,1,-1};
v(int) yy = {1,-1,1,-1,-1,1,0,0};
v(int) xs = {0,0,1,-1};
v(int) ys = {1,-1,0,0};
void sieve();
struct segmentTree {
    // segment tree of sumation
    vector<int> seg;
    int n;
    segmentTree(int N) {
        n = N;
        seg.resize(n*4);
    }
    void build(int start, int end, int node, vector<int> &ar) {
        if(start == end) {
            seg[node] = ar[start];
            return;
        }
        int mid = (start + end) / 2;
        build(start, mid, node * 2 + 1, ar);
        build(mid + 1, end, node * 2 + 2, ar);
        seg[node] = seg[node * 2 + 1] + seg[node * 2 + 2];
        return;
    }

    void build(vector<int> &ar) {
        build(0, n-1, 0, ar);
    }

    int query(int start, int end, int node, int l, int r) {
        if(l > end || r < start) return 0;

        if(l <= start && end <= r) {
            return seg[node];
        }

        int mid = (start + end) / 2;
        int L = query(start, mid, node * 2 + 1, l, r);
        int R = query(mid + 1, end, node * 2 + 2, l, r);
        return L + R;
    }

    int query(int l, int r) {
        return query(0, n-1, 0, l, r);
    }



    void update(int start, int end, int node, int idx, int val) {
        if(start == end) {
            seg[node] = val;
            return;
        }
        int mid = (start + end) / 2;
        if(idx <= mid){
            update(start, mid, node * 2 + 1, idx, val);
        }
        else{ 
            update(mid + 1, end, node * 2 + 2, idx, val);
        }

        seg[node] = seg[node * 2 + 1] + seg[node * 2 + 2];
    }

    void update(int idx, int val) {
        update(0, n-1, 0, idx, val);
    }
 
};
bool cmp(vi &a, vi &b) {
    if(a[1] == b[1]) {
        a[0] < b[0];
    }
    return a[1] < b[1];
}
void solve() {

    int n, q;
    cin >> n >> q;
    vector<int> ar(n);
    sin(ar);
    vector<vector<int>> tmp;
    for(int i = 0; i < q; i++) {
        int l, r;
        l--, r--;
        cin >> l >> r;
        l--, r--;
        tmp.pb({l, r, i});
    }
    segmentTree st(n);
    sort(all(tmp), cmp);
    vector<int> res(q);
    int idx = 0;
    map<int,int> mp;
    for(auto i : tmp) {
        while(idx <= i[1]) {
            if(mp.find(ar[idx]) == mp.end()) {
                st.update(idx, 1);
            }
            else {
                st.update(mp[ar[idx]], 0);
                st.update(idx, 1);
            }
            mp[ar[idx]] = idx;
            idx++;
        }
        res[i[2]] = st.query(i[0], i[1]);
    }
    for(int i : res){
        print(i);
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);

#ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
    sieve();
    // TEST
    solve();
    return 0;
}   
void sieve() {

}