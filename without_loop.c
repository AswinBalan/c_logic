#include <stdio.h>
void main()
{
  static int flag = 0, iter = 1, limit;
  if (flag == 0)
    {
        printf("Enter the limit:\t");
        scanf("%d",&limit);
        printf("The numbers upto the limit:\n");
        flag = 1;
    }
    if ( iter-1 == limit)
        return ;
  printf("%d\n",iter++);
  main();
}
