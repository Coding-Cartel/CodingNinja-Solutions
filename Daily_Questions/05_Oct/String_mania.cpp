#include <bits/stdc++.h> 
using namespace std;

int stringMania(int n, int m, string str1, string str2) {
    // Write your code here.
    if(str1 == str2){
        return 0;
    }
    for(int i=0; i<min(str1.size(),str2.size()); i++){
        if(str1[i] > str2[i]){
            return 1;
        }
        if(str1[i] < str2[i]){
            return -1;
        }
    }
    return -1;
}

int main(){

    int n = 3;
    int m = 4;
    
    string str1 = "xyz";
    string str2 = "abcd";

    cout << stringMania(n, m, str1, str2) << endl;

    return 0;
}