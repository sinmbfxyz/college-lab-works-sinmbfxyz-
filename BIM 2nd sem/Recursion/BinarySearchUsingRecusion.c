#include<stdio.h>

int BinarySearch(int arr[],int low, int high, int key){
	if(low<=high){
		int mid=low+(high-low)/2;
		if(arr[mid]==key){
			return mid;
		}
		else if(key<arr[mid]){
			return BinarySearch(arr,low,mid-1,key);
		}
		else{
			return BinarySearch(arr,mid+1,high,key);
		}
	}
	else{
		return -1;
	}
}

void main(){
	int arr[]={1,2,5,9,15,17,29,50,89,100};
	int size,res,key,low=0,high;
}