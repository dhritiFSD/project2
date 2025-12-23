#include<stdio.h>
int main()
{
	int num, firstdigit,lastdigit,sum;
	printf("Enter the number");
	scanf("%d",&num);
	lastdigit=num%10;
	firstdigit=num;
	while(firstdigit>=10)
	{
		firstdigit=firstdigit/10;
	}
	sum=firstdigit+lastdigit;
	printf("Firstdigit = %d\n",firstdigit);
	printf("Lastdigit = %d\n",lastdigit);
	printf("sum of firstdigit and lastdigit =%d",sum);
	return 0;
	
}
