#include <bits/stdc++.h> 
using namespace std;

long long int countOf3(int x) {
     // Write your code here.
     long long count = 0;
     if(x<=2){
          return count;
     }
     while(x > 2){
          int temp = x;
          while(temp!=0){
               if(temp%10 == 3){
                    count++;
               }
               temp/=10;
          }
          x--;
     }
     return count;
}

int main(){

    int x = 13;
    cout << countOf3(x) << endl;

    return 0;
}