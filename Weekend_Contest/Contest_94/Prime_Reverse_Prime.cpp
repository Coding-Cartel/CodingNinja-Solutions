#include<bits/stdc++.h>
using namespace std;

int primeReversePrime(int l, int r) {
    // Write your code here.
    int x = l;
    int count = 0;
    while(x<=r){
        int rev = 0;
        int temp = x;
        while(temp!=0){
            rev = (rev*10)+temp%10;
            temp/=10;
        }
        temp = x;
        int check1 = 0;
        for(int i=1; i<=temp; i++){
            if(temp%i == 0){
                check1++;
            }
        }
        int check2 = 0;
        for(int i=1; i<=rev; i++){
            if(rev%i == 0){
                check2++;
            }
        }
        if(check1 == 2 && check2 == 2){
            count++;
        }
        x++;
    }
    return count;
}

int main(){

    int l = 4;
    int r = 10;

    cout << primeReversePrime(l, r);

    return 0;
}