// profit or loss program
#include<stdio.h>
int main(){
	int costprice;
	int sellingprice;
	int profit;
	int loss;
	printf("enter the cost price: ");
	scanf("%d",&costprice);
	printf("enter the selling price: ");
	scanf("%d",&sellingprice);
	profit =sellingprice - costprice;
	loss =costprice - sellingprice;
	if(costprice == sellingprice)
	{
		printf("there is  no profit  no loss");
	}
	else if(costprice < sellingprice)
	{
		printf("there is profit of %d",profit);
	}
	else if(costprice > sellingprice)
	{
		printf("there is loss of %d",loss);
    }   
	
}

