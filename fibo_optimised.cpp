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
    int prev1 = 1, prev2 = 1;
    for(int i=3; i<=n; i++){
        int current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }
    cout << prev1 << endl;
}