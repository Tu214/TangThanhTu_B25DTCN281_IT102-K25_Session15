#include<stdio.h>

int difference(int a, int b){
	if(a > b){
		return a - b;
	}else{
		return b - a;
	}
}

int product(int a, int b){
	int result = a * b;
	return result;
}

int main(){
	int a,b;
	printf("nhap so thu nhat:");
	scanf("%d", &a);
	printf("nhap so thu hai:");
	scanf("%d", &b);
	
	int brand = difference(a, b);
	int accumulate = product(a, b);
	printf("hieu = %d\n",brand);
	printf("tich = %d\n",accumulate);
	
	return 0;
}
