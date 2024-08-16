#include<stdio.h>

void main(){
	int i,j,factorial=1;
	float div;
	for(i=1;i<=7;i++){
		factorial=1;
		div=1;
		for(j=1;j<=i;j++){
			factorial*=j;
		}
		div=(float)i/factorial;
		printf("%.2f\n",div);
		sum+=div;
	}  
	printf("The sum is %.2f",sum);
}
