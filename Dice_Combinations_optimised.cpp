#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <string>
#include <cmath>
#include <chrono>
#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> prev = {1}; //dp[0] = 1;
    for(int i=1; i<=n; i++){
        int current = 0;
        for(int j : prev){
            current = (current + j) % MOD;
        }
        prev.push_back(current);
        if(prev.size() > 6){
            prev.erase(prev.begin());
        }
        cout << prev.back() << endl;
    }
}