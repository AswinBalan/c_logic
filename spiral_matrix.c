#include<stdio.h>
int main()
{
  int i=0,j=-1, a[20][20],value=0,n,var, var1;

  printf("Enter the value of n\n");
  scanf("%d",&n);
    for(var=0;var<n;var++)
    {
        for(var1=0;var1<n;var1++)
        {
          if(j==n-1 && i!= n-1 )
          {
              i++;
              j =n-1;
          }
          else if(i==n-1 && j <= n-1 && j != 0)
          {
              i=n-1;
              j--;
          }
          else if(i==0)
          {
              i=0;
              j++;
          }
          else if(j==0)
          {
              j=0;
              i--;
          }
           //printf("i = %d - j = %d\t",i,j);
          a[i][j]= ++value;
      }
    }

  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          printf("%d\t",a[i][j]);
      }
      printf("\n");
  }
}







/*
1  2  3  4  5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

0           n     

*/
    