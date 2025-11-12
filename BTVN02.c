#include<stdio.h>
#include<stdlib.h>
int sumDigit(int n){
	int sum = 0;
	int digit = 0;
	
	int Positive = abs(n);
	if(Positive == 0){
		return 0;
	}
	
	while(Positive > 0){
		digit = Positive % 10;
		sum += digit;
		Positive /= 10;
	}
	return sum;
}

int main(){
	long n;
	printf("nhap so:");
	scanf("%d",&n);
	
	int result = sumDigit(n);
	printf("tong cac chu so cua %d la: %ld",n,result);
}
