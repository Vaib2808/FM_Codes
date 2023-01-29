#include<stdio.h>     

int main() {
   
    // integer variables n, num, d, rev which is 0
    int n , num , d , rev =0 ;
   // input from user 
    printf("Enter your number\n");
    scanf("%d",&n);
    num = n; // n in temporary variable num
    while(n>0) {  // reverse the number using while loop
        d= n%10;  // d is the remainder of n divided by 10
        n= n/10;
        rev = (rev*10) + d; // rev is the reversed number
    }
    if(rev == num) {   // if temporary number and reversed number are eqaul then the number is palindrome
        printf("The number is palindrome");
    }
    else {   //if temporary number and reversed number are not eqaul then the number is not palindrome
        printf("The number is not palindrome");
    }
}



// Palindrome of string means we can read it either from left to right or right to left it appears same.