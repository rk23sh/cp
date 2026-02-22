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
#include <functional>
using namespace std;
#define sp ' '  
#define nl '\n'
#define let auto
#define pb push_back
#define eb emplace_back
#define ll long long
#define mp make_pair
#define inf int(1e9)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define repeat(n) for(int i=0; i<n; i++)
#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
template <class T> using uset = unordered_set<T>;
template <class K, class V> using umap = unordered_map<K, V>;
template <class T> using pq_max = priority_queue<T>;
template <class T> using pq_min = priority_queue<T, vector<T>, greater<T>>;

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

template<typename T>
vector<vector<T>> graph(int n, int m){
    return vector<vector<int>>(n, vector<int>(m));
}

template<typename T>
void print_v(vector<T> v){
    for(int i: v){
        out(i,sp);
    }
    out(nl);
}

ll gcd(ll divisor, ll dividend){
    while (divisor){
        ll x = dividend % divisor;
        dividend = divisor;
        divisor = x;
    }
    return dividend;
}

// to protect from overflow or else we could have done (a * b) / gcd
ll lcm(ll a, ll b){
    return (a / gcd(a,b)) * b; 
}

// **********************************
void f(){
    ll n; in(n);
    ll sum = 0;
    while (n){
        sum += n;
        n = n >> 1ll;
    }
    out(sum,nl);
    return;
}

int main() {
    fast_io;

    // code
    int t; in(t);
    while (t--){
        f();
    }
    return 0;

}
