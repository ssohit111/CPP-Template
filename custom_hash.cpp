#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long 
#define ull unsigned ll
#define ld long double 
#define mod 1000000007
#define pb push_back 
#define pf push_front
#define dll deque<ll> 
#define vll vector<ll>
#define vvll vector<vll> 
#define pll pair<ll,ll> 
#define vpll vector<pll>
#define dpll deque<pll>
#define mapll map<ll,ll>
#define umapll unordered_map<ll,ll,custom_hash>
#define nl "\n" 
#define all(v) v.begin(),v.end() 
#define ms(a,x) memset(a,x,sizeof(a))
#define fr for(ll i=0;i<n;i++)
#define frr for(ll i=1;i<=n;i++)
// #define fr(aa,bb) for(ll i=aa;i<=bb;i++)
#define ordered_set tree<ll, null_type,less<ll>, rb_tree_tag,tree_order_statistics_node_update>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
using namespace __gnu_pbds;
vector<string> split(const string& s, char c) {
    vector<string> v; stringstream ss(s); string x;
    while (getline(ss, x, c)) v.push_back(x); return move(v);
}
template<typename T, typename... Args>
inline string arrStr(T arr, int n) {
    stringstream s; s << "[";
    for(int i = 0; i < n - 1; i++) s << arr[i] << ",";
    s << arr[n - 1] << "]";
    return s.str();
}
#define EVARS(args...) {__evars_begin(__LINE__); __evars(split(#args, ',').begin(), args);}
inline void __evars_begin(int line) { cerr << "#" << line << ": "; }
template<typename T> inline void __evars_out_var(vector<T> val) { cerr << arrStr(val, val.size()); }
template<typename T> inline void __evars_out_var(T* val) { cerr << arrStr(val, 10); }
template<typename T> inline void __evars_out_var(T val) { cerr << val; }
inline void __evars(vector<string>::iterator it) { cerr << endl; }
template<typename T, typename... Args>
inline void __evars(vector<string>::iterator it, T a, Args... args) {
    cerr << it->substr((*it)[0] == ' ', it->length()) << "=";
    __evars_out_var(a);
    cerr << "; ";
    __evars(++it, args...);
}
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        // http://xorshift.di.unimi.it/splitmix64.c
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
//template<class T, class H>using umap=unordered_map<T,H,custom_hash>;
//template<class T>using uset=unordered_set<T,custom_hash>;
// ll fact[1000005];
ll dmod(ll x){
    return ((x+mod)%mod);
}
ll modular_power(ll x,ll y){
    ll ans=1;
    while(y){
        if(y&1)ans=dmod(ans*x);
        y/=2;
        x=dmod(x*x);
    }
    return ans;
}
ll inv(ll x){
    return modular_power(dmod(x),mod-2);
}
ll nCr(ll n,ll r){
    if(r>n) return 0;
    else if(r<0) return 0;
    else if(r==0||r==n)return 1;
    ll ans=fact[n];
    ans=(ans*modular_power(fact[n-r],mod-2))%mod; ans=(ans*modular_power(fact[r],mod-2))%mod;
    return ans;
}
int main()
{
    //clock_t clk = clock();
    fio
    //cerr << '\n'<<"Time (in s): " << double(clock() - clk) * 1.0 / CLOCKS_PER_SEC << '\n';
    // fact[0]=1;fact[1]=1;fact[2]=2;
    // for(ll i=3;i<=1000003;i++)
    // {
    //     fact[i]=(fact[i-1]*i)%mod;
    // }
    ll tt=1;
    //cin>>tt;
    while(tt--)
    {
        
    }
    return 0;
}
