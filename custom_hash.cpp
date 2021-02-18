#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_az_fck ios_base::sync_with_stdio(false);cin.tie(NULL);
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
int main()
{
    fast_az_fck
    unordered_map<ll,vector<ll>,custom_hash>mp;
    mp[1].push_back(10);mp[1].push_back(20);mp[1].push_back(30);
    mp[2].push_back(70);mp[3].push_back(90);
    for(auto it1:mp)
    {
        for(auto it:it1.second)
            cout<<it<<" ";
        cout<<"\n";
    }
}
