#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,sum,a,b,x;

a=1;
b=1;
cin>>n;
if(n==1){
   sum=1;
}
if(n==2){
    sum=1;
}

for (x = 1; x < (n-1); x++) {
        sum =a+b;
        a =b;
        b =sum;
}
cout<<b;
}