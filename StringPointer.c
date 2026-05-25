#include<stdio.h>

int main()
{
    char str[] = "Ganesh";
    char *ptr = NULL;

    ptr = str;       //100

    printf("%C\n",*ptr);     //G
    ptr++;    //101

    printf("%C\n",*ptr);     //a
    ptr++;

    printf("%C\n",*ptr);     //n
    ptr++;

    return 0;
}       