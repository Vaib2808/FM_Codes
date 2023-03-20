#include<stdio.h>

int main() {
    // variable i and count which intially is 0
    int i , count =0 ;
    char arr[100] ; // loop to read characters from the user and store them in an array called "arr" of size 100. 
    printf("enter your array  \n");  // Declaring string by char array 
    for(i=0;i<100;i++) { // for i = 0 , its less than 100 and i++ will keep increasing value of 1 till loop ends
        scanf("%c",&arr[i]); // Inside the loop, using the scanf function to read a single character from the user and store it in the current index of the array. 
        if(arr[i]=='.') {  // if the end of the array is period then stop/ break so ur array ends there
            break; 
        }
       count++; // count = count +1 // count increases as the no.of elements in the array are counted depending on the i value
       // counting the number of character entered by the user, by incrementing the count variable. 
    }
    printf("size of array = %d", count); // output 
}

// for words in loop use if(arr[i] == ' ' && arr[i+1] !== ' '