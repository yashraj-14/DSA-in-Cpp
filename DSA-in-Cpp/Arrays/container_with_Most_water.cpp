// Problem: Container With Most Water (Water Tank Problem)
// Approach: Brute Force (check all possible pairs)
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Explanation:
// We consider every pair of lines (i, j).
// The height is the minimum of the two lines,
// and width is the distance between them.
// Area = height × width.
// We track the maximum area among all pairs.
#include <iostream>
#include <algorithm>
using namespace std;
int maxWater(int arr[],int n){
	int maxSoFar =0;
	for(int i=0;i<=n-2;i++){
		for(int j=i+1; j<=n-1;j++){
			int height=min(arr[i],arr[j]);
			int width =j-i;
			int area= height*width;
			maxSoFar = max(maxSoFar, area);
			
		}
	}return maxSoFar;

}

int main(){
	int arr[]={1,8,6,2,5,4,8,3,7};
	int n= sizeof(arr)/sizeof(int);
	cout<< maxWater(arr,n)<<endl;
	return 0;
}