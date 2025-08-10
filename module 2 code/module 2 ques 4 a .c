// module 2 
/* Write a C program that accepts two integers from the user and performs
arithmetic, relational, and logical operations on them. Display the results.*/
#include<stdio.h>
int main(){
	int a;
	int b;
	printf("enter value of a :");
	scanf("%d",&a);
	printf("enter value of b :");
	scanf("%d",&b);
	// arithmetic operation
	printf("\n%d + %d = %d",a,b,a+b);
	printf("\n%d - %d = %d",a,b,a-b);
	printf("\n%d * %d = %d",a,b,a*b);
	printf("\n%d / %d = %d",a,b,a/b);
	// relation operation
	printf("\n%d == %d = %d",a,b,a==b);
	printf("\n%d != %d = %d",a,b,a!=b);
	printf("\n%d < %d = %d",a,b,a<b);
	printf("\n%d > %d = %d",a,b,a>b);
	printf("\n%d <= %d = %d",a,b,a<=b);
	printf("\n%d >= %d = %d",a,b,a>=b);
	//logical operation
	printf("\n%d && %d = %d",a,b,a&&b);
	printf("\n%d || %d = %d",a,b,a||b);
	
}

