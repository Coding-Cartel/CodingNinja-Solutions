#include<bits/stdc++.h>
using namespace std;

void pushZerosAtEnd(vector<int> &arr) 
{
	// Write your code here.
	int count = 0;
	vector<int> res;
	for(int i=0; i<arr.size(); i++){
		if(arr[i] == 0){
			count++;
		}
		else{
			res.push_back(arr[i]);
		}
	}
	while(count--){
		res.push_back(0);
	}
	arr = res;
}

int main(){

    vector<int> arr = {2, 0, 4, 1, 3, 0, 28};
    pushZerosAtEnd(arr);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    return 0;
}