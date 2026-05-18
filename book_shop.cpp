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
    int n, x;
    cin >> n >> x;
    vector<int> val(n);
    vector<int> weight(n);
    
    for(int i = 0; i < n; i++){
        cin >> weight[i];
    }
    
    for(int i = 0; i < n; i++){
        cin >> val[i];
    }
    
    vector<int> prev(x + 1, 0);
    
    for(int i = 1; i <= n; i++){
        vector<int> curr(x + 1);
        for(int j = 0; j <= x; j++){
            // compute dp[i][j] here
            int w = weight[i - 1];
            int value = val[i - 1];
            
            int pick = (j >= w ? prev[j - w] + value : 0); // dp[i-1][j-w]
            int skip = prev[j]; // dp[i - 1][j]
            // transition
            // dp[i][j]
            curr[j] = max(skip, pick); 
        }
        prev = curr;
    }
    
    cout << prev[x] << endl;
    return 0;
}