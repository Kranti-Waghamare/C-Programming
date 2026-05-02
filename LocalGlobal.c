#iclude<stdio.h>

int no = 11;       // Global vatiable ( data )
void fun()
{
   int i = 51;     //Local variable (stack)
   printf(" Inside Fun : %d\n",i);    //51
   printf(" Inside Fun : %d\n",no);   // 11


}

int main()
{
   int i = 21;            //Local variable (stack)
   printf(" Inside main : %d\n",i);       //21
   printf(" Inside main : %d\n",no);      //11


   fun();

    return 0;
}