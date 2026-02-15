#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <numeric>
#include <cassert>
using namespace std;
#define sp ' '  
#define nl '\n'
#define pb push_back
#define eb emplace_back
#define ll long long
#define mp make_pair
#define inf int(1e9)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define repeat(x) for(int i=0; i<x; i++)
#define loop_it(x) for(auto it=x.begin(); it != x.end(); it++)
#define loop(x,ptr) for(auto ptr: x)
#define grid(n,m,T) vector<vector<T>> grid(n, vector<T>(m));
#define umap(var,K,V) unordered_map<K,V> var;
#define uset(var,T) unordered_set<T> var;
#define vec(var,T,sz) vector<T> var(sz);
// template <typename T> using uset = unordered_set<T>;
// template <class K, class V> using umap = unordered_map<K, V>;
// template <class T> using vv = vector<vector<T>>;
template <class T> using pqmax = priority_queue<T>;
template <class T> using pqmin = priority_queue<T, vector<T>, greater<T>>;

template<typename... Args>
void out(const Args&... args){
    int arr[] = {0, (cout<<args, 0)...};
    (void)arr;
}

template<typename... Args>
void in(Args&... args){
    int arr[] = {0, (cin>>args, 0)...};
    (void)arr;
}


// **********************************

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // code:
    vec(int,0,v);
    

}
