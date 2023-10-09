#include <bits/stdc++.h> 
using namespace std;

vector<int> rowWaveForm(vector<vector<int>> &mat) {
    // Write your code here.
    vector<int> res;
    for(int i=0; i<mat.size(); i++){
        if(i%2 == 0){
            for(int j=0; j<mat[0].size(); j++){
                res.push_back(mat[i][j]);
            }
        }
        else{
            for(int j=mat[0].size()-1; j>=0; j--){
                res.push_back(mat[i][j]);
            }
        }
    }
    return res;
}

int main(){

    vector<vector<int>> mat = {{1,2}, {0,5}};
    vector<int> res = rowWaveForm(mat);

    for(int i=0; i<res.size(); i++){
        cout << res[i] << " ";
    }

    return 0;
}