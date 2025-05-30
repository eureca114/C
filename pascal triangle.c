#include<stdio.h>
#include<conio.h>
main()
{
  int x,i,j;
  printf("enter the height of Triangle-");
  scanf("%d",&x);
  int p[x]={1},c[x];
  p[-1]=0;
  for(i=0;i<x;i++)
    {
      for(j=0;j<i;j++)
        {
          c[j]=p[j]+p[j-1];
          printf("%d",c[j]);
        }
      printf("\n");
      for(j=0;j<i;j++) p[j]=c[j];
      c[j]=0;
    }
}
