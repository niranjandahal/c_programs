#include <stdio.h>
main()
{
	int num,digit,sum=0;
	printf("enter the no");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit;
		num=num/10;	
	}
	
printf("the sum of the digits is %d",sum);
return 0;
}
