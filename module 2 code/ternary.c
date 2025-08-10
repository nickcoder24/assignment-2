// WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main(){
	int a;
	int b;
	int c;
	int max;
	printf("enter a value  : ");
	scanf("%d",&a);
	printf("enter a value  : ");
	scanf("%d",&b);
	printf("enter a value  : ");
	scanf("%d",&c);
	
	max=(a>b)? (a>c ? a:c) : (b>c ? b:c);
	printf("%d is greatest ",max);
	
}
