#include <iostream>
#include<algorithm>
using namespace std;

int maxSubarraySum(int arr[],int n){
	int x=arr[0];
	int maxSoFar = arr[0];
	for(int i=1;i<n;i++){
		x=max(arr[i],x+arr[i]);
		maxSoFar=max(maxSoFar,x);
	}
	return maxSoFar;
}

int minSubarraySum(int arr[],int n){
	int x= arr[0];
	int minSoFar =arr[0];
	for(int i=1;i<n;i++){
		x=min(arr[i],x+arr[i]);
		minSoFar=min(x,minSoFar);

	}
	return minSoFar;
}

int circularSubarraySum(int arr[],int n){
	int maxNum=maxSubarraySum(arr,n);
	if(maxNum<0){
		return maxNum;
	}
	int minNum=minSubarraySum(arr,n);
	int total =0;
	for(int i=0;i<n;i++){
		total+=arr[i];

	}
	return max(maxNum,total-minNum);

}
int main(){
	int arr[]={5,-3,5};
	int n= sizeof(arr)/sizeof(int);
	cout<<circularSubarraySum(arr,n)<<endl;

}