#include <iostream>
#include <vector>
using namespace std;
#define ll long long


vector<ll> prefixsum(vector<ll> orig){
    vector<ll> prefix(orig.size() + 1);
    prefix[0] = 0;
    for(ll i = 1; i < orig.size() + 1; i++){
        prefix[i] = (prefix[i-1]+orig[i-1]);
    }
    
    return prefix;
}

int main(){
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    for(ll i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<ll> prefix = prefixsum(v);
    
    for(ll i = 0; i < q; i++){
        ll a, b; cin >> a >> b;
        cout << prefix[b] - prefix[a] << endl;
    }

}