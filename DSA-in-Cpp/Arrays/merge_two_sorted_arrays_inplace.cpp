// Problem: Merge Two Sorted Arrays (In-Place)
// Approach: Two Pointer (from end)
// Time Complexity: O(n + m)
// Space Complexity: O(1)

// Explanation:
// We start from the end of both arrays and place the larger element
// at the end of the first array (which has extra space).
// This avoids overwriting useful elements.
#include <iostream>
#include <algorithm>
using namespace std;
void mergeTheArrays(int arr[], int brr[]){
	int i=3;//last valid element in array 1 with extra space 
	int j=3;//last valid element in array 2
	int k=7;//last position in array 1 with extra space
	while(i>=0 && j>=0){
		if(arr[i]>brr[j]){
			arr[k--]=arr[i--];
		}else{
			arr[k--]=brr[j--];
			
		}
	}
	while(j>=0){
		arr[k--]=brr[j--];
	}
	for(int l=0;l<8;l++){
		cout<<arr[l]<<"  ";
	}
}

int main(){
	int arr[8]={10,40,60,80};
	int brr[4]={20,50,70,90};
	mergeTheArrays(arr,brr);
	return 0;
}