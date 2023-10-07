#include<bits/stdc++.h>
using namespace std;

int goodPartition(int n, vector<int> v) {
    // Write your code here.
    sort(v.begin(), v.end());
    if(n == 2){
        if(v[0] != v[1]){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        if(v[v.size()/2] != v[(v.size()/2)-1]){
            return 1;
        }
        else{
            return 0;
        }
    }
}

int main(){

    vector<int> v = {1, 3, 2, 2};
    int n = 4;

    cout << goodPartition(n, v);

    return 0;
}