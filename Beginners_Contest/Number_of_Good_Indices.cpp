#include<bits/stdc++.h> 
using namespace std;

int numberOfGoodIndices(int n, vector<int>& a) {
    // Write Your Code Here.
    int count = 0;
    int temp = 0;
    for(int i=0; i<n; i++){
        temp = 0;
        for(int j=0; j<n; j++){
            if(i!=j && a[i] % a[j] == 0){
                temp++;
            }
        }
        if(temp >= 2){
            count++;
        }
    }
    return count;
}

int main(){
    int n = 5;
    vector<int> a = {4, 2, 2, 6, 7};
    cout << numberOfGoodIndices(n, a);
}