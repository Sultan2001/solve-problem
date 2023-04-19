#include <stdio.h>
#include <stdlib.h>
unsigned char anagram(char *str1, char *str2);
unsigned int len_str(char *str1);
char *str1 = "paret";
char *str2 = "pear";

int main()
{
   printf("%d\n",anagram(str1,str2));

    return 0;
}
unsigned char anagram(char *str1, char *str2)
{
    char *p_st1=str1;
    char *p_st2=str2;
    unsigned char flag =0;
    if ( !(len_str(str1) == len_str(str2)) )
    {
        flag=1;

    }

    while(*str1 != '\0')
    {
        if (flag==1)
        {
            break;
        }

        while(*str2 !='\0')
        {
            if(*str1==*str2)
            {

                flag =0;
                break;
            }
            else
            {
                flag =1;

            }
            str2++;
        }

        str2=p_st2;
        str1++;
    }
    return flag;
}
unsigned int len_str(char *str1)
{
    unsigned int len=0;
    while(*str1 != '\0')
    {
        str1++;
        len++;


    }
    return len;
}
