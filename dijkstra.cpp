#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
using namespace std;
#define com ', ' 
#define sp ' '  
#define nl '\n'
#define pb push_back
#define f first
#define s second
#define out cout
#define in cin
#define ll long long
#define mp make_pair
#define inf int(1e9)
typedef pair<int,int> pii;
typedef vector<vector<pii>> vvpii;
typedef vector<vector<int>> vvi;
typedef vector<int> vi;
typedef vector<pii> vpii;

template <typename T> using uset = unordered_set<T>;
template <class K, class V> using umap = unordered_map<K, V>;



int main(){
    int n, e;
    in >> n >> e;
    auto adjl = vvpii(n, vpii());
    for(int i=0; i<e; i++){
        int u, v, cost;
        in >> u >> v >> cost;
        adjl[u].pb(mp(v,cost));
        adjl[u].pb(mp(v,cost));
    }

    for(int i=0; i<n; i++){
        for(auto pr: adjl[i]){
            cout << pr.first << pr.second ;
        }
        cout << nl;
    }

    return 0;
}