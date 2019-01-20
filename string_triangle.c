#include<stdio.h>
#include<string.h>
int main()
{
    char string[10];
    int i, length;
    printf("Enter the input string\n");
    scanf("%s",string);
    length = strlen(string);
    for(i=0;i< length;i++)
    {
        // printf("% width . precision s",value,value,string_name);
        //uncomment to see all sort of triangles
                        
        //printf("%*.*s",i+1,i+1,string);
        //printf("%*.*s",length,length-i,string);
        //printf("%*.*s",length,i+1,string);
        //printf("%-*.*s",length,length-i, string);


        printf("\n");
    }
}
