// ## Algorithm 
// -> Traverse the array from xth index to yth index.
// -> Compare the elements and take a  variable to store the maximum element value.
// -> Retrurn the maximum element after traversing the whole array from x to y.


int ninjaAndRangeMax(int n, int x, int y, vector<int> &a) {
	// Write your code here.
	int maxxi = a[x];
	for(int i=x; i<=y; i++){
		if(a[i] > maxxi){
			maxxi = a[i];
		}
	}
	return maxxi;
}