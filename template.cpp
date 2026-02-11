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

vector<string> split(string s){
    vector<string> res;
    stringstream ss(s);
    string str;
    while (ss >> str){
        res.push_back(str);
    }
    return res;
}

// **********************************