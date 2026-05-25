#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size = 0;
    float *Marks = NULL;
    int i = 0;            //Loop Counter
    
    printf("Enter number of elements\n");
    scanf("%d",&size);

    //Dynamic Memory Allocation
    Marks = (float*)calloc(size , sizeof(float));

    printf("Enter your marks : \n");
    
    //Iteration
    //   1      2      3
    for(i = 0; i < size; i++)
    {
        scanf("%f",&Marks[i]);    //4
    }
    
    printf("Entered marks are : \n");

    //    1     2      3
    for(i = 0; i < size; i++)
    {
        printf("%f\n",Marks[i]);    //4
    }

    free(Marks);
    
    return 0;
}