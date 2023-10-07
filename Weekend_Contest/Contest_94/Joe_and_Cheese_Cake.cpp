#include<bits/stdc++.h>
using namespace std;

int joeAndCheeseCake(int n, int m) {
	// Write your code here.
	if(n%m == 0){
		return n/m;
	}
	else{
		return (n/m)+1;
	}
}
int main(){

    int n = 5;
    int m = 3;

    cout << joeAndCheeseCake(n, m);

    return 0;
}