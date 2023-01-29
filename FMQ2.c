#include<stdio.h>

int main() {
    char str[100]; // a string by char array with a max of 100 elements
    int a; // integer a 
    char c; // character c 
    double d; // double integer d 
   
   // input from user
    printf("enter your \n string, \n integer, \n character, \n double respectively"); 
    scanf("%s",str);
    scanf("%d %c %lf",&a,&c,&d);

    // Output 
    printf("entered string is %s\n",str); 
    printf("entered integer is %d\n",a);
    printf("entered character is %c\n",c);
    printf("entered double is %lf\n",d);
    return 0
}