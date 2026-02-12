#include <iostream>
#include <cmath>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <algorithm>
#define inf int(1e9)
using namespace std;

template <typename T> using uset = unordered_set<T>;
template <class K, class V> using umap = unordered_map<K, V>;

vector<string> split(string s, char delim = ' '){
    vector<string> res;
    stringstream ss(s);
    string token;
    while (getline(ss, token, delim)){
        res.push_back(token);
    }
    return res;
}

template <typename T>
void print(vector<T> vec){
    cout << "[ ";
    for (T i: vec) {
        cout << i << ", ";
    }
    cout << "\b\b ]" << "\n";
}

template <typename T>
void print(T i){
    cout << i << "\n";
}

template <typename K, typename V>
void print(unordered_map<K, V> umap){
    cout << "{ ";
    for (auto pr: umap){
        cout << pr.first << " : " << pr.second << ", ";
    }
    cout << "\b\b }" << "\n";
}

template <typename T>
void print(unordered_set<T> uset){
    cout << "{ ";
    for (T i: uset){
        cout << i << ", ";
    }
    cout << "\b\b }" << "\n";
}

template <typename T, typename Condition>
vector<T> filter(vector<T> &vec, Condition cond){
    vector<T> res;
    for (T i: vec){
        if (cond(i)){
            res.push_back(i);
        }
    }
    return res;
}

template <typename T, typename Function>
vector<T> map(vector<T> &vec, Function f){
    for (int i=0; i < vec.size(); i++){
        vec[i] = f(vec[i]);
    }
    return vec;
}

template <typename T, typename Operation>
T reduce(vector<T> &vec, T initial, Operation op){
    T res = initial;
    for (T i: vec){
        res = op(res, i);
    }
    return res;
}
// **********************************

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // code:

}
