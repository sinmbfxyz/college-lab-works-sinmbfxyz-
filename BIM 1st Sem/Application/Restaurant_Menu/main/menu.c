#include<stdio.h>
#include<stdlib.h>
#include<process.h>

void menu();
int take_order();
void switch_momo(void);
void switch_laphing(void);
void switch_chowmein(void);
void switch_burger(void);

/* Main Function */		
void main(){
	menu();
}

void menu(){
	char ch;
	int choice1;
	do{
		system("cls");
		printf("********OUR MENU********\n");
		printf("\n1.MOMO\n2.Laphing\n3.Chowmein\n4.Burger\n5.Exit\n");
		printf("\n************************\n");
		printf("Enter your choice: ");
		scanf("%d",&choice1);
		switch(choice1){
			case 1:
				switch_momo();
				break;
			case 2:		
				switch_laphing();
				break;
			case 3:
				switch_chowmein();
				break;
			case 4:
				switch_burger();
				break;
			case 5:
				printf("Thank you.Please Visit Us Again!\n");
				exit(1);
			default:
				printf("Invalid choice");
	}
	fflush(stdin);
	printf("\nDo you want to continue?[y/n] ");
	scanf("%c",&ch);
	} while(ch!='n');
}

/* Sub Functions */
int take_order(){
	int quantity;
	printf("Enter the quantity: ");
	scanf("%d",&quantity);
	printf("\n");
	return quantity;
}

void switch_momo(){
	int item,quantity;
	system("cls");
	printf("********MOMO ITEMS********\n");
	printf("\n1.Buff MOMO ==> Rs 120\n");
	printf("2.Veg MOMO ==> Rs 100\n");
	printf("3.Chicken MOMO ==> Rs 150\n");
	printf("4.Go Back\n");
	printf("\n**************************\n");
	printf("Enter your choice: ");
	scanf("%d",&item);
	switch(item){
		case 1: 
			quantity=take_order();
			printf("You ordered %d buff momo\nYour total bill is %d\n",quantity,quantity*120);
			break;
		case 2:
			quantity=take_order(); 
			printf("You ordered %d veg momo\nYour total bill is %d\n",quantity,quantity*100);
			break;
		case 3: 
			quantity=take_order();
			printf("You ordered %d chicken momo\nYour total bill is %d\n",quantity,quantity*150);
			break;
		case 4:
			menu();
			break;
		default:
			printf("Invalid choice\n");
	}		
}

void switch_laphing(){
	int item,quantity;
	system("cls");
	printf("********Laphing ITEMS********\n");
	printf("\n1.Jhol Laphing ==> Rs 60\n");
	printf("2.Dry Laphing ==> Rs 55\n");
	printf("3.Special Laphing ==> Rs 70\n");
	printf("4.Go Back\n");
	printf("\n****************************\n");
	printf("Enter your choice: ");
	scanf("%d",&item);
	switch(item){
		case 1: 
			quantity=take_order();
			printf("You ordered %d jhol laphing\nYour total bill is %d\n",quantity,quantity*60);
			break;
		case 2: 
			quantity=take_order();
			printf("You ordered %d dry laphing\nYour total bill is %d\n",quantity,quantity*55);
			break;
		case 3: 
			quantity=take_order();
			printf("You ordered %d special laphing\nYour total bill is %d\n",quantity,quantity*70);
			break;
		case 4:
			menu();
			break;
		default:
			printf("Invalid choice\n");
	}
}

void switch_chowmein(){
	int item,quantity;
	system("cls");
	printf("********Chowmein ITEMS********\n");
	printf("\n1.Buff Chowmein ==> Rs 120\n");
	printf("2.Veg Chowmein ==> Rs 100\n");
	printf("3.Chicken Chowmein ==> Rs 150\n");
	printf("4.Go Back\n");
	printf("\n****************************\n");
	printf("Enter your choice: ");
	scanf("%d",&item);
	switch(item){
		case 1: 
			quantity=take_order();
			printf("You ordered %d buff chowmein\nYour total bill is %d\n",quantity,quantity*120);
			break;
		case 2: 
			quantity=take_order();
			printf("You ordered %d veg chowmein\nYour total bill is %d\n",quantity,quantity*100);
			break;
		case 3: 
			quantity=take_order();
			printf("You ordered %d chicken chowmein\nYour total bill is %d\n",quantity,quantity*150);
			break;
		case 4:
			menu();
			break;
		default:
			printf("Invalid choice\n");
	}
}

void switch_burger(){
	int item,quantity;
	system("cls");
	printf("********Burger ITEMS********\n");
	printf("\n1.Buff Burger ==> Rs 140\n");
	printf("2.Veg Burger ==> Rs 120\n");
	printf("3.Chicken Burger ==> Rs 160\n");
	printf("4.Go Back\n");
	printf("\n****************************\n");
	printf("Enter your choice: ");
	scanf("%d",&item);
	switch(item){
		case 1: 
			quantity=take_order();
			printf("You ordered %d buff burger\nYour total bill is %d\n",quantity,quantity*140);
			break;
		case 2: 
			quantity=take_order();
			printf("You ordered %d veg burger\nYour total bill is %d\n",quantity,quantity*120);
			break;
		case 3: 
			quantity=take_order();
			printf("You ordered %d chicken burger\nYour total bill is %d\n",quantity,quantity*160);
			break;
		case 4:
			menu();
			break;
		default:
			printf("Invalid choice\n");
	}
}
	

