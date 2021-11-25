#include<bits/stdc++.h>

//macros
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
#define fr(a,b,c) for(ll a=b;a<=c;a++)
#define frr(a,b,c) for(ll a=b;a>=c;a--)
using namespace std;

//gcc optimise
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

//custom hash
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

//operator overloading
template<typename T> istream& operator >>(istream &in,vector<T> &v){ for(auto &x:v) in>>x; return in;}
template<typename T> ostream& operator <<(ostream &out,const vector<T> &v){ for(auto &x:v) out<<x<<' '; return out;}
template<typename T1,typename T2> istream& operator >>(istream &in,pair<T1,T2> &p){ in>>p.first>>p.second; return in;}
template<typename T1,typename T2> ostream& operator <<(ostream &out,const pair<T1,T2> &p){ out<<p.first<<' '<<p.second; return out;}

//basic used functions
// ll fact[1000005];
ll dmod(ll x) {
    return ((x + mod) % mod);
}
ll modular_power(ll x, ll y) {
    ll ans = 1;
    while (y) {
        if (y & 1)ans = dmod(ans * x);
        y /= 2;
        x = dmod(x * x);
    }
    return ans;
}
ll inv(ll x) {
    return modular_power(dmod(x), mod - 2);
}
// ll nCr(ll n,ll r){
//     if(r>n) return 0;
//     else if(r<0) return 0;
//     else if(r==0||r==n)return 1;
//     ll ans=fact[n];
//     ans=(ans*modular_power(fact[n-r],mod-2))%mod; ans=(ans*modular_power(fact[r],mod-2))%mod;
//     return ans;
// }

//input output file work
void start() {
    fio
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
}

//main function
int main()
{
    start();
    // clock_t clk = clock();
    // fact[0]=1;fact[1]=1;fact[2]=2;
    // for(ll i=3;i<=1000003;i++)
    // {
    //     fact[i]=(fact[i-1]*i)%mod;
    // }
    ll tt = 1;
    // cin >> tt;
    while (tt--)
    {
        
    }
    // cerr << '\n'<<"Time (in s): " << double(clock() - clk) * 1.0 / CLOCKS_PER_SEC << '\n';
    return 0;
}
