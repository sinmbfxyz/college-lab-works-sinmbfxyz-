#include<stdio.h>

void main(){
	int largest,sec_largest,i,j,a[5],temp;
	printf("Enter 5 numbers: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	largest=a[0];
	sec_largest=a[1];
	for(i=1;i<5;i++){
		if(a[i]>largest){
			sec_largest=largest;
			largest=a[i];
		}
	}
	for(i=0;i<5;i++){
		if(a[i]!=largest && a[i]>sec_largest){
			sec_largest=a[i];
		}
	}
	printf("Second largest element is %d\n",sec_largest);
}
