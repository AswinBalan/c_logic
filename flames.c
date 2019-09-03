#include<string.h>
#include<stdio.h>

int main()
{
    char str[10],str2[10];
    int i,j,len,len2,k, cnt=0;
    char f[] ="flames";
    printf("Enter the two strings\n");
    // GETTING INPUT
    scanf("%s%n",str,&len);
    getchar();
    scanf("%s%n",str2,&len2);

    // STRIKING COMMON CHARACTERS IN BOTH THE STRINGS
    for(i=0;i<len;i++)
    {
        for(j=0;j<len2;j++)
        {
            if(str[i] == str2[j])
            {
                str[i]='0';
                str2[j]='0';
                cnt++;
                break;

            }
        }
    }

    // CALCULATING THE COUNT TO INTERATE IN "FLAMES"

    int route = len+len2-(2*cnt);
    int index= route;
    if(index == 0)
        return 0;

    // LOGIC FOR ELIMINATING THE CHARACTER
    for(i=0;i<5;i++)
    {
        if(index > strlen(f))
        {
            // IF THE RESULT IS ZERO THEN DECREMENTING SHOULD POINT TO THE LAST CHARACTER OF THE STRING
            if(index%strlen(f) == 0)
            {
                index = index%strlen(f);
                index = index+(strlen(f)-1);
            }
            else
              index = (index%strlen(f))-1;
        }
        else
            index = index - 1;

        k = index;

        while(k < strlen(f)-1)
        {
            f[k]= f[k+1];
            k++;
        }
        f[k]='\0';
        index = index + route;
    }

        printf("%c",f[0]);
     return 0;
}
