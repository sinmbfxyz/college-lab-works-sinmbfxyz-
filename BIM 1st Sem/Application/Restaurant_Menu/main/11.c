#include<stdio.h>
#include<stdlib.h>

void main(){
	int choice,n1,n2,sum,difference,multiplication;
	float division;
	printf("********MENU********");
	printf("\n\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\n");
	printf("********************\n\n");
	printf("Enter first number: ");
	scanf("%d",&n1);
	printf("Enter second number: ");
	scanf("%d",&n2);
	printf("Enter your choice: ");
	scanf("%d",&choice);
	system("cls");
	switch(choice){
		case 1:
			printf("%d + %d = %d\n",n1,n2,n1+n2);
			break;
		case 2:
			printf("%d - %d = %d\n",n1,n2,n1-n2);
			break;
		case 3:
			printf("%d * %d = %d\n",n1,n2,n1*n2);
			break;
		case 4:
			printf("%d / %d = %.2f\n",n1,n2,(float)n1/n2);
			break;
		case 5:
			exit(1);
		default:
			printf("Invalid choice");
	}
}
