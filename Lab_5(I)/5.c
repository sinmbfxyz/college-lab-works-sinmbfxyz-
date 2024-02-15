#include<stdio.h>

void main(){
	int largest,sec_largest,i,j,a[5],temp;
	printf("Enter 5 numbers: ");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	sec_largest=a[1];
	printf("Second largest element is %d\n",sec_largest);
	
}
