//Problem: DNF SORT(array containg only 0's,1's and 2's)
//Approach: Used three pointers
//Time Complexity: O(n)
// Space Complexity: O(1)

//Explaination: We create three pointers
//low pointer points to the last zero element
//mid pointer points to the first element of unknown region
// high pointer points to the first element of 2's region


#include <iostream>
using namespace std;
int main(){
	int arr[]={1,0,1,2,0,1,2,0,1};
	int n = sizeof(arr)/sizeof(int);
	int low =-1; //end of 0's region
	int mid =0; // start of unknown region
	int high = n;// start of 2's region
	while(mid<high){
		if(arr[mid]==0){
			low++;
			swap(arr[mid],arr[low]);
			mid++;
		}else if(arr[mid]==1){
			mid++;
		}else{
			high--;
			swap(arr[mid],arr[high]);
		}

	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}