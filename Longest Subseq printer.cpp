#include<stdio.h>
int main()
{
	int x,count[2],max[2];
	count[0]=1,count[1]=0,max[0]=0,max[1]=1;
	printf("Enter the number of numbers you wanna enter-");
	scanf("%d",&x);
	int a[x];
	for(int i=0;i<x;i++)
	{
		printf("enter %d number-",i+1);
		scanf("%d",&a[i]);
		if(i>0)
		{
			if(a[i]>a[i-1]) count[0]++;
			else
			{
				if(max[0]<count[0]) max[0]=count[0],max[1]=count[1];
				count[0]=1,count[1]=i;
			}
		}
	}
	if(max[0]<count[0]) max[0]=count[0],max[1]=count[1];
	for(int i=max[1];i<(max[1]+max[0]);i++) printf("%d\n",a[i]);
	return 0;
}
