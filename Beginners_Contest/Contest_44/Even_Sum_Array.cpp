#include<bits/stdc++.h>
using namespace std;

int makeEvenSum(int n, vector<int> &a) {
    // Write your code here.
    int odd = 0;
    int even = 0;
    for(int i=0; i<n; i++){
        if(a[i]%2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd%2!=0 && even==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n = 4;
    vector<int> arr = {1, 5, 5, 10};
    cout << makeEvenSum(n, arr) << endl;
}