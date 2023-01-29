#include<stdio.h>

int main() {
    int a[10][10],sumd1 = 0,sumd2 = 0 , sum =0 ,r,c,i,j;  // a[10][10] is a 2D array
    // user input no.of rows
    printf("enter the number of rows ="); 
    scanf("%d",&r);             //4
    // user inputs no.of columns 
    printf("enter the number of columns ="); 
    scanf("%d",&c);             //4
    
    // user inpts matrix elements 
    printf("enter the  matrix element\n"); 
    for(i=0;i<r;i++) {  // for loop is used to  iterate through each element in the 2D array.
        for(j=0;j<c;j++) {  // 
            scanf("%d",&a[i][j]);  // for each element it prompts the user to enter a value for that element.
            sum += a[i][j]; // adds the value of the element to the sum variable, this also gives us the total sum of elements in the matrix
            if(i == j) // checks whether the element is on first diagonal
            sumd1 += a[i][j];   //  adds the value of that element to the sumd1 variable, which tells the sum of the elements on the first diagonal. 
            if(i+j==(r-1)) // checks whether that element is on the second diagonal
            sumd2 += a[i][j]; // adds the value of that element to the sumd2 variable, which tells the sum of the elements on the second diagonal.
        }
    }
    printf("entered matrix is : \n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d",a[i][j]); //printf function to print each element of the array
        } 
        printf("\n"); // printf function to print a newline character to start the next row of the matrix on a new line. 
    }
    printf("Sum of all array elements is %d\n", sum);
    printf("Sum of 1st diagonal array elements is %d\n", sumd1);
    printf("Sum of 2nd diagonal array elements is %d\n", sumd2);
}