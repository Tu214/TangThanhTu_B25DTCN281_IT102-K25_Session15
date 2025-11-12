#include<stdio.h>

int reverse(int n){
	int number = 0;
	int digit = 0;
	
	while(n!=0){
		digit = n % 10;
		number = number * 10 + digit;
		n /= 10;
	}
	return number;
}

int main(){
	int n;
	printf("nhap so:",n);
	scanf("%d",&n);
	
	int reverseNum = reverse(n);
	
	printf("so dao nguoc: %d",reverseNum);
	return 0;
}
