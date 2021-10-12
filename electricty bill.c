#include<stdio.h>
int main()
{
char name,adress,idno;
printf("Enter your Name,adress,id number");
scanf("%s,%s,%s",&name,&adress,&idno);
	
float total, unit;

	printf("Enter the units consumed=");
	scanf("%f",&unit);

	if(unit<=50 && unit>=0)
	{
		total=unit*3.50;
		printf("Electricity Bill=%f Rupees",total);
	}
	else if(unit<=100 && unit>50)
	{
		total=50*3.50+(unit-50)*4;
		printf("Electricity Bill=%f Rupees",total);

	}
	else if(unit<=250 && unit>150)
	{
		total=50*3.50+100*4+(unit-150)*5.20;
		printf("Electricity Bill=%f Rupees",total);

	}

	else if(unit>250)
	{
		total=50*3.50+100*4+100*5.20+(unit-250)*6.50;
		printf("Electricity Bill=%f Rupees",total);

	}
	else
	{
		printf("Please enter valid consumed units...");
	}


	return 0;
}
