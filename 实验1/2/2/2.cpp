#include<stdio.h>
#include<stdlib.h>
void main()
{
	int a,b,c,t;
	printf("������������a,b,c:\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(((a+b>c)||(a+c>b)||(b+c>a))&&((a-b<c)||(a-c<b)||(b-c<a)))
	{
		printf("%d,%d,%d",a,b,c);
		if(a==b==c)
		t=1;
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
		t=2;
		else if(a==b||a==c||b==c)
		t=3;
		else
		t=4;
	}
	else
		t=5;

	switch(t)
	{
	case 1:printf("��������Ϊ�ȱ�������\n");break;
	case 2:printf("��������Ϊֱ��������\n");break;
	case 3:printf("��������Ϊ����������\n");break;
	case 4:printf("��������Ϊһ��������\n");break;
	case 5:printf("���ܹ���������\n");break;
	}
	system("pause");
}