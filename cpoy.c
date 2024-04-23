#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20],str2[20],i;
    printf("enter first string: ");
    gets(str1);
    printf("the original string is:%s\n", str1);
    for(i=0;str1[i]!= '\0';i++)
    {
       str2[i]=str1[i];
    }
    str2[i]='\0';
    printf("the copied string is:%s", str2);
    return 0;
}
