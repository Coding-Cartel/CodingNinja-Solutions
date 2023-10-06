#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.
    long long ans = 0;
    long long temp = 0;
    for(int i=0; i<n; i++){
        temp += arr[i];
        if(temp < 0){
            temp = 0;
        }
        if(temp > ans){
            ans = temp;
        }
    }
    return ans;
}

int main(){

    int n = 9;
    vector<int> arr = {1, 2, 7, -4, 3, 2, -10, 9, 1};
    cout << maxSubarraySum(arr, n); 

    return 0;
}