#include<stdio.h>

int PrintEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("Number is Even ");
    }
    else
    {
        printf("Number is odd");
    }
}

int main()
{
    int iValue = 0; 

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return 0;
}