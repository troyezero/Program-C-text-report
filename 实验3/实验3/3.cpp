#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,m,n,b,c=0;
	int a[10]={2,25,31,61,21,58,42,12,30,26};
	for(m=0;m<9;m++)
		for(i=0;i<9-m;i++)
			if(a[i]<a[i+1])
			{
				n=a[i];
				a[i]=a[i+1];
				a[i+1]=n;
			}
	printf("这十个数由大到小排列为：\n");
	for(i=0;i<10;i++)
		printf("%d\n",a[i]);
	printf("\n");
	printf("任意输入一个数：");
	scanf("%d",&b);
	int start=0,end=9,mid;
 while (start <= end) 
 { mid = (start+end)/2 ;
	if (b>a[mid])
	{ start = mid+1; } 
	else if (b<a[mid]) 
	{ end = mid-1; }
	else { break; } } 
 if (b==2||b==25||b==31||b==61||b==21||b==58||b==42||b==12||b==30||b==26)
 { printf("找到了，是第%d个数", mid+1); }
	else { printf("查无此数"); }
	printf("\n");
    system("pause");
}