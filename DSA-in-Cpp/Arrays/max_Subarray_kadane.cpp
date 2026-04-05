#include <iostream>
#include <climits>
using namespace std;
// Problem: Maximum Subarray Sum
// Approach: Kadane's Algorithm (Optimal)
// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
// We maintain a running sum (current max).
// At each step, we decide:
// - Extend the previous subarray OR
// - Start a new subarray from current element
// Finally, we keep track of the maximum sum seen so far.
// The prefix sum version takes O(n^2) T.C.

int maxSubarraySum(int arr[],int n){
	 int x = arr[0]; // x is the current sum
	 int maxSoFar= x;
	 for(int i=1;i<n;i++){
	 	x=max(x+arr[i],arr[i]);
	 	maxSoFar=max(x,maxSoFar);
	 }
	 return maxSoFar;


}

int main(){
	int arr[]={-3,2,-1,4,-5};
	int n= sizeof(arr)/sizeof(int);
	cout<<maxSubarraySum(arr,n)<<endl;
}