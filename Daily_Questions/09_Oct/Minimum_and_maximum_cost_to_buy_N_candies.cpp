#include <bits/stdc++.h>
using namespace std;

// Function to calculate minimum cost.
long long minimumCost(vector<int> &cost, int n, int k)
{
    // Write your code here.
    long long count = 0;
    int  x = n-1;
    sort(cost.begin(), cost.end());
    for(int i=0; i<=x; i++){
        count+=cost[i];
        x = x-k;
    }
    return count;
}

// Function to calculate maximum cost.
long long maximumCost(vector<int> &cost, int n, int k)
{
    // Write your code here.
    long long count = 0;
    int  x = n-1;
    sort(cost.begin(), cost.end());
    reverse(cost.begin(), cost.end());
    for(int i=0; i<=x; i++){
        count+=cost[i];
        x=x-k;
    }
    return count;
}

int main(){

    int n = 5;
    int k = 2;
    vector<int> cost = {9, 8, 2, 6, 4};

    cout << minimumCost(cost, n, k) << " " << maximumCost(cost, n, k) << endl;

    return 0;
}