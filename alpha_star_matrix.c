#include<stdio.h>
/*

input:
5

output:

a*b*c
*d*e*
f*g*h
*i*j*
k*l*m
*/
int main(void)
{
    int outer, inner,size, alpha = 97;
    scanf("%d",&size);
    for( outer=0;outer<size;outer++)
    {
        for(inner = 0; inner < size; inner++)
        {
            //if row is even 
            if(outer%2 == 0)
            {
                //if column is even
                if(inner%2 == 0)
                    printf("%c", alpha++);
                else
                    printf("*");
            }
            //if row is odd
            else
            {
                //if column is odd
                if(inner%2 != 0)
                    printf("%c", alpha++);
                else
                    printf("*");

            }
        }
        printf("\n");
    }
    return (0);
}