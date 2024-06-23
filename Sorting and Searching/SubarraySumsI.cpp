// Link : 
#include<bits/stdc++.h>
// #include<boost/multiprecision/cpp_int.hpp>
// using namespace boost::multiprecision;
using namespace std;
#define ll       long long
#define TEST     int t = 1; cin >> t; while(t--) solve();
#define SPEED    ios_base::sync_with_stdio(false);cin.tie(0); cout.tie(0);
#define p(A,B)   pair<A,B>
#define all(v)   v.begin(), v.end()
#define allr(v)  v.rbegin(), v.rend()
#define vec(T)   vector<T>
#define vv(T)    vector<vector<T> >
#define maxhp(T) priority_queue<T>
#define minhp(T) priority_queue<T, vector<T> , greater<T> >
#define pb       push_back
#define ff       first
#define ss       second
#define print(x) for(auto it:x) cout<<it<<" ";cout << endl;
#define YES      cout << "YES" << endl;
#define NO       cout << "NO" << endl;
#define ps(x,y)  fixed<<setprecision(y)<<x
#define mem(n,i) memset(n, i,sizeof n)
#define endl     "\n"
const ll INF = 1e18;
const ll MOD = 1e9 + 7;
const ll mod = 998244353;
 
bool prime(ll n) {if(n == 1) return false; for(int i = 2; i * i <= n; i++) if(n % i == 0) return false;return true;}
ll POW (ll a, ll p, ll m) { ll res = 1; while (p > 0) { if(p % 2 == 0){ p /= 2; a = ((a%m)*(a%m))%m;} else{ res = ((res%m)*(a%m))%m; p--; }}return res;}
ll mod_mul(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a * b) % MOD) + MOD) % MOD;}
ll mod_add(ll a, ll b) {a = a % MOD; b = b % MOD; return (((a + b) % MOD) + MOD) % MOD;}
 
void solve();
int main() {
    SPEED
#ifndef ONLINE_JUDGE 
    freopen("input.txt","r",stdin); 
    freopen("output.txt","w",stdout);
#endif
    // TEST
    solve();
    return 0;
}
 
 
void solve() {
    int n, k;
    cin >> n >> k;
    vec(int) ar(n);
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    int res = 0, l = 0, r = 0;
    ll sum = 0;
    while(l < n && r < n) {
        if(sum == k) {
            res++;
            sum += ar[l];
            l++;
        }
        else if(sum < k) {
            sum += ar[l];
            l++;
        }
        else {
            sum -= ar[r];
            r++;
        }
    }
    while(r < n) {
        sum -= ar[r++];
        if(sum == k) res++;
    }
    cout << res << endl;
}