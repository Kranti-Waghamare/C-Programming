#include<stdio.h>
int main()
{
    int No = 0;

    printf("Enter the Number :\n");
    scanf("%d",&No);
    if(No%2 == 0)
    {
        printf("Its even number\n");
    }
    else 
    {
        printf("Its odd number\n");
    }
    return 0;
}