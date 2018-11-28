#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int a=100,b=0,t,i;
	for(a;a<=300;a++)
	{
		t=sqrt((float)a);
		for(i=2;i<=t;i++)
			if(a%i==0)
				break;
		if(i>=t+1)
		{printf("%d ",a);
		b=b+1;}
		if(b%7==0)
			printf("\n");
	
	}
	printf("\n");
	system("pause");
}