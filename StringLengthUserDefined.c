#include<stdio.h>

// call by address
int strlenX(char *ptr)
{
    int i = 0;

    while(*ptr != '\0')
    {
        i++;
        ptr++;
    }

    return i;
}

int main()
{
    char str[] = "Ganesh";         //100
    int Ret = 0;

    Ret = strlenX(str);       //strlenX(100);

    printf("String lenghth is : %d\n" ,Ret);

    return 0;
}       