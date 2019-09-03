#include<stdio.h>
#include<string.h>

int main()
{

    char n[7], x[7],y[7];
    int i,j,n_len, x_len, y_len, x_cnt=0, n_cnt=0, y_cnt=0;

    scanf("%s",n);
    scanf("%s",x);
    scanf("%s",y);

    n_len = strlen(n);
    x_len = strlen(x);
    y_len = strlen(y);


    for(i=0;i<x_len;i++)
    {
        for(j=0;j< n_len;j++)
        {
            //condition for manipulating original string
            if(x[i] == n[j])
            {
                x_cnt++;
                n[j]='-';
                break;
            }
        }
    }

//checking whether the first substring is present or not
    if(x_len != x_cnt)
    {
            printf("NO");
            return 0;
    }

 
    for(i=0;i<y_len;i++)
    {
        for(j=0;j< n_len;j++)
        {
            if(y[i] == n[j])
            {
                y_cnt++;
                n[j]='-';
                break;
            }
        }
    }

//cheking for second sub-string

    if(y_cnt == y_len)
        printf("YES");
    else
        printf("NO");
    
    return 0;


}