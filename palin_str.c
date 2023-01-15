#include<stdio.h>
#include<string.h>
int main()
{
    char name[40],str[40];
    int value;
    printf("Enter the string:");
    gets(name);
    strcpy(str,name);
    strrev(str);
    if (!strcmp(name,str)==1)
        printf("PALINDROME\n");
    else
        printf("NOT PALINDROME\n");       
    return 0;

}