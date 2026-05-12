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
    vector<int> coins(n);
    for(int i = 0; i < n; i++){
        cin >> coins[i];
    }
    vector<long long> dp(x + 1, 1e15);
    dp[0] = 0;
    for(int i = 1; i <= x; i++){
        for(int j = 0; j < n; j++){
            if(coins[j] <= i){
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }
    if(dp[x] == 1e15){
        cout << -1 << endl;
    } else {
        cout << dp[x] << endl;
    }
}