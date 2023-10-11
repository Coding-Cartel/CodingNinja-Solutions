#include <bits/stdc++.h> 
using namespace std;
int swapAdjacentBits(int n)
{ 
    // Write your code here
    if(n == 0){
        return n;
    }
    vector<int> bitt;
    while(n!=0){
        bitt.push_back(n%2);
        n/=2;
    }
    if(bitt.size()%2 != 0){
        bitt.push_back(0);
    }
    reverse(bitt.begin(), bitt.end());
    int num = 0;
    int po = 0;
    for(int i=0; i<bitt.size()-1; i++){
        swap(bitt[i], bitt[i+1]);
        i++;
    }
    for(int i=bitt.size()-1; i>=0; i--){
        if(bitt[i] == 1){
            num += pow(2, po);
        }
        po++;
    }
    return num;
}

int main(){

    int n = 9;
    cout << swapAdjacentBits(n) << endl;

    return 0;
}