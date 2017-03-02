#include <stdio.h>

int main()
{
	int price=0,amount=100;
	printf("消费金额："); 
	scanf("%d",&price);
	printf("实际付款：");
	scanf("%d",&amount); 
	int change=amount-price;
	printf("找您%d元\n",change);
	
	
	return 0;
}

