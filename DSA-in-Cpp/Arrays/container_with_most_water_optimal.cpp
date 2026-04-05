// Problem: Container With Most Water (Water Tank Problem)
// Approach: Two Pointer (Optimal)
// Time Complexity: O(n)
// Space Complexity: O(1)

// Explanation:
// We use two pointers: one at the beginning (i) and one at the end (j).
// At each step, we calculate the area formed by lines at i and j.
// Then we move the pointer pointing to the smaller height,
// because moving the larger one won't help increase area.


#include <iostream>
#include <algorithm>
using namespace std;
int mostWater(int arr[],int n){
	int i =0;
	int j=n-1;
	int maxSoFar =0;
	while(i<j){
		int height= min(arr[i],arr[j]);
		int width = j-i;
		int area = height*width;
		maxSoFar =max(maxSoFar,area);
		if(arr[i]<arr[j]){
			i++;
		}
		else{
			j--;
		}
	}
	return maxSoFar;

}

int main(){
	int arr[]={1,8,6,2,5,4,8,3,7};
	int n= sizeof(arr)/sizeof(int);
	cout<< mostWater(arr,n)<<endl;
	return 0;
}