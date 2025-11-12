#include<stdio.h>

int binarySeach(int arr[],int n,int key){
	int left = 0;
	int right = n - 1;
	
	while(left <= right){
		int mid = (left + right) / 2;
		if(arr[mid] == key){
			return mid;
		}else if(arr[mid] < key){
			left = mid + 1;
		}else{
			right = mid - 1;
		}
	}
	return -1;
}
int main(){
	int arr[] = {1,2,3,4,5,6,17,18,19,20};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key;
	printf("nhap phan tu can tim trong mang:");
	scanf("%d",&key);
	
	int index = binarySeach( arr, n, key);
	
	if(index!=1){
		printf("tim thay phan tu %d tai arr[%d]",key,index);
	}else{
		printf("khong tim thay phan tu!!!");
	}
	return 0;
}
