// -> Count the sum of the given array.
// -> Check the difference of sum from the given total sum.
// -> Check if differnce is divisible by maximum value which can be used.
// -> If divisible then return their division else return their division plus one.

#include <bits/stdc++.h> 
int findMinNumbers(vector<int> &arr, int sum, int maxVal) {
	// Write your code here.
	int total = 0;
	for(int i=0; i<arr.size(); i++){
		total += arr[i];
	}
	int diff = abs(sum - total);
	if(diff%maxVal == 0){
		return diff/maxVal;
	}
	else{
		return (diff/maxVal)+1;
	}
} 