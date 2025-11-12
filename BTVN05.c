#include<stdio.h>

int mostElement(int arr[],int n){
	int maxCount = 0;
	int mostValue =0;
	for(int i = 0 ; i < n ; i++){
		int count = 0;
		for(int j = 0 ; j < n ; j++){
			if(arr[i] == arr[j]){
				count++;
			}
		}
		if(count > maxCount){
			maxCount = count;
			mostValue = arr[i];
		}
	}
	return mostValue;
}
int numberOccurrences(int arr[],int n,int x){
	int count = 0;
	for(int i = 0 ; i < n ; i++){
		if(arr[i] == x){
			count++;
		}
	}
	return count;
}
int main(){
	int arr[] = {11,2,3,3,4,5,6,5,6,8,5,6,};
	int n = sizeof(arr) / sizeof(arr[0]);
	int element = mostElement( arr, n);
	int times = numberOccurrences( arr, n, element);
	printf("gia tri co so lan xuat hien nhieu nhat:%d\n",element);
	printf("so lan xuat hien:%d",times );
	return 0;
}
