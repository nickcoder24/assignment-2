//Calculate the Sum of Natural Numbers Using the While Loop
#include<stdio.h>
int main(){
	int i=1,n,sum=0;
	printf("Enter any number : ");
	scanf("%d",&n);
	while(i<=n){
		sum = sum+i;
		i++;
	}
	printf("the sum all natural number is %d",sum);
	return 0;
}
