// Problem: Merge Two Sorted Arrays
// Approach: Using Extra Space (Auxiliary Array)
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)
// Better solution exist with O(1) space complexity

// Explanation:
// We use a third array (crr[]) to store merged result.
// Compare elements from both arrays and insert the smaller one.
// Finally, copy remaining elements from either array.
#include <iostream>
#include <algorithm>
using namespace std;
void mergeTheArrays(int arr[], int brr[],int n,int m){
	int crr[n+m];
	int i=0;
	int j=0;
	int k=0;
	while(i<n and j<m){
		if(arr[i]<brr[j]){
			crr[k]=arr[i];
			i++;
			k++;
		}else{
			crr[k]=brr[j];
			j++;
			k++;
		}
	}
	while(i<=n-1){
		crr[k]=arr[i];
		i++;
		k++;
	}
	while(j<=m-1){
		crr[k]=brr[j];
		j++;
		k++;
	}
	for(int l=0;l<n+m;l++){
		cout<<crr[l]<<"  ";
	}
}

int main(){
	int arr[]={10,40,60,80};
	int n= sizeof(arr)/sizeof(int);
	int brr[]={20,50,70,90};
	int m= sizeof(brr)/sizeof(int);
	mergeTheArrays(arr,brr,n,m);
	return 0;
}