#include <bits/stdc++.h> 
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	int n = arr.size();
	int j = arr.size()-1;
	for(int i=m+1; i<n; i++){
		if(i<j){
			swap(arr[i], arr[j]);
			j--;
		}
	}
	
	
}

int main(){

    int m = 3;
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    reverseArray(arr, m);

    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    } 

    return 0;
}

