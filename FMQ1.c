#include<stdio.h> 
int main()
{
    // variables 
    int i,j;
// loop
    for(i=1;i<=5;i++) // when i is 1 it is less than 5 // then process is repeated by adding 1 to i so its 2 now and so on 
   {
    for(j=1;j<=i;j++)// when j is 1 it is equal or less than i so since in case 1 i=1 j=1 // j=i=2 and so on
    {
        printf("*"); // case satisfied so * is printed 
    }
    printf("\n");
   }
}