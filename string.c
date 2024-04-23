#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int len;
    gets(str);
    len=strlen(str);
    printf("The string length %d",len);
}
