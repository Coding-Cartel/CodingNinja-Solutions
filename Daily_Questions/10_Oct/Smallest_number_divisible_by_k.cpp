#include<bits/stdc++.h>
using namespace std;

int lengthOfNumber(int k)
{
	if(k%2 == 0 || k%5 == 0){
		return -1;
	}
	long long int n = 0;
	for(int i=1; i<=k; i++){
		int n = ((n*10)+1) % k;
		if(n==0){
			return i;
		}
	}
	return -1;
}

int main(){

    int k = 1;
    cout << lengthOfNumber(k);

    return 0;
}