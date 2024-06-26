#include<stdio.h>

void main(){
	int factorial=1,i=1,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	label:
		factorial*=i;
		i++;
	if(i<=n){
		goto label;
	}
	printf("The factorial of %d is %d",n,factorial);
}   
