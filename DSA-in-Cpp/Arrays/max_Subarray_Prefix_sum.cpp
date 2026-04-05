#include <iostream>
#include <climits>
using namespace std;
// Problem: Maximum Subarray Sum
// Approach: Prefix Sum (Brute Force using cumulative sum array)
// Time Complexity: O(n^2)
// Space Complexity: O(n)

// Explanation:
/* We first build a prefix sum array (csum) where each index stores
 the sum of elements from 0 to that index.*/
/* Then we calculate subarray sum using:
	 sum(i, j) = csum[j+1] - csum[i]*/


int maxSubarraySum(int arr[],int n){
	 int csum[101];
	 csum[0]=0;
	 for(int i =1; i<=n; i++){
	 	csum[i]=csum[i-1]+arr[i-1];
	 }
	 int maxSoFar=INT_MIN;
	 for(int i=0;i<n;i++){
	 	for(int j=i; j<n; j++){
	 		int sum= csum[j+1]-csum[i];
	 		maxSoFar= max(maxSoFar,sum);
	 	}
	 }
	 return maxSoFar;


}

int main(){
	int arr[]={-2,1,-3,4,-1,2,1,-5,4};
	int n= sizeof(arr)/sizeof(int);
	cout<<maxSubarraySum(arr,n)<<endl;
}