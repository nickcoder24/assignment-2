/*using a switch statement to display the month
name based on the user’s input */
#include<stdio.h>
int main(){
	int num;
	printf("enter a number : ");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		printf("January \n");
		break;
	case 2:
		printf("febuary \n");
		break;
	case 3:
		printf("march \n");
		break;	
	case 4:
		printf("april \n");
		break;	
	case 5:
		printf("may \n");
		break;
	case 6:
		printf("June \n");
		break;
	case 7:
		printf("July \n");
		break;
	case 8:
		printf("august \n");
		break;	
	case 9:
		printf("september \n");
		break;
	case 10:
		printf("october \n");
		break;
	case 11:
		printf("november \n");
		break;	
	case 12:
		printf("december \n");
		break;
	default:
		printf(" something is wrong !!!! \n");
		break;			
	
	}
}
