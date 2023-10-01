// ## Algorithum
// -> First count the number of even number's and odd number's in the array.
// -> If count of odd is odd then decrease it by one so its count becomes even.
// -> Now add the count of even and odd number and return it.

int parityProblems(vector<int> &arr) {
    // Write your code here.
    int even = 0;
    int odd = 0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(odd%2 !=0){
        odd--;
    }
    return even+odd;
}