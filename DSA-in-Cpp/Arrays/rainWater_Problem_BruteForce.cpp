// Problem: Trapping Rain Water
// Approach: Brute Force (for each index find left max and right max)
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Explanation:
// For each element, we find:
// - Left max (highest bar on left)
// - Right max (highest bar on right)
// Water stored at index i = min(left max, right max) - height[i]
#include <iostream>
using namespace std;

int rainWater(int h[],int n){
	int total =0;
	for(int i=0;i<n;i++){
		//for li
		int li=h[i];
		for(int j=i-1;j>=0;j--){
			li= max(li,h[j]);
		}
		//for ri
		int ri=h[i];
		for(int j=i+1;j<=n-1;j++){
			ri= max(ri,h[j]);
		}



		int wi = min(li,ri)-h[i];
		total+=wi;
	}
	return total;
}




int main(){
	int h[]={0,1,0,2,1,0,1,3,2,1,2,1};
	int n = sizeof(h)/sizeof(int);
	cout<<rainWater(h,n)<<endl;
	return 0;
}