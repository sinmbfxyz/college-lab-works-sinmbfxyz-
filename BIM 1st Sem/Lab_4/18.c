#include<stdio.h>

void main(){
	int i,terms,n1=0,n2=1,n3;
	printf("Enter the number of terms: ");
	scanf("%d",&terms);
	for(i=1;i<=terms;i++){
		printf("%d\n",n1);
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
}
