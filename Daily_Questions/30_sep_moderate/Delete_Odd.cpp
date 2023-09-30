#include <bits/stdc++.h> 
vector < int > detectOdd(int n, vector < int > nums) {
    // Write your code here.
    vector<int> res;
    sort(nums.begin(),nums.end());
    int i=0;
    while(i<n){
        if(nums[i] == nums[i+1]){
            i+=2;
        }
        else{
            res.push_back(nums[i]);
            i++;
        }
    }
    return res;
}