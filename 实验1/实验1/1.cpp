#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c;
	printf("输入三个数a ,b ,c:\n ");
	scanf("%d,%d,%d",&a,&b,&c);
	if(((a+b>c)||(a+c>b)||(b+c>a))&&((a-b<c)||(a-c<b)||(b-c<a)))
	{
		printf("%d,%d,%d",a,b,c);
		if(a==b==c)
		{printf("该三角形为等边三角形\n");}
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		{printf("该三角形为直角三角形\n");}
		else if(a==b||a==c||b==c)
		{printf("该三角形为等腰三角形\n");}
		else
		{printf("该三角形为一般三角形\n");}
	}
	else
		printf("不能构成三角形\n");
	system("pause");
}