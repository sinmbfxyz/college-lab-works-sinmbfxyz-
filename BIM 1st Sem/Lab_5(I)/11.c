#include<stdio.h>

void main(){
	int i,j,temp,a[5];
	printf("Enter 5 elements: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("In Ascending Order)
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
